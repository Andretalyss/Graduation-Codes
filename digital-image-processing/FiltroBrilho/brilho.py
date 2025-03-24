from PIL import Image

def get_pixels(image_path):
    image = Image.open(image_path)
    pixels = list(image.getdata())
    return pixels 

def create_image(pixels, image_width, image_height):
    image = Image.new('RGB', (image_width, image_height))
    image.putdata(pixels)
    return image

def rgb_to_hsb(rgb):
    r, g, b = rgb[0] / 255.0, rgb[1] / 255.0, rgb[2] / 255.0
    
    cmax = max(r, g, b)
    cmin = min(r, g, b)
    delta = cmax - cmin

    h = 0
    if delta == 0:
        h = 0
    elif cmax == r and g >= b:
        h = 60 * (g-b)/delta
    elif cmax == r and g < b:
        h = 60 * (g-b)/delta + 360
    elif cmax == g:
        h = 60 * (b-r)/delta + 120
    elif cmax == b:
        h = 60 * (r-g)/delta + 240
    
    if cmax == 0:
        s = 0
    else:
        s = 1 - (cmin/cmax)
    
    v = cmax

    return int(h), int(s * 100), int(v * 100)  # Retorna os valores de H, S e V

def hsb_to_rgb(hsb):
    h,s,v = hsb[0]/360, hsb[1]/100, hsb[2]/100

    if s == 0:
        r = g = b = int(v*255)
    else:
        h = h * 6
        if h == 6:
            h = 0

        i = int(h)
        f = h - i
        p = v * (1-s)
        q = v * (1-s*f) 
        t = v * (1-s*(1-f))

        if i == 0:
            r,g,b = int(v*255), int(t*255), int(p*255)
        elif i == 1:
            r,g,b = int(q*255), int(v*255), int(p*255)
        elif i == 2:
            r,g,b = int(p*255), int(v*255), int(t*255)
        elif i == 3:
            r,g,b = int(p*255), int(q*255), int(v*255)
        elif i == 4:
            r,g,b = int(t*255), int(p*255), int(v*255)
        else:
            r,g,b = int(v*255), int(p*255), int(q*255)

    return r,g,b

def filtro_multi_brilho(pixels, fator):
    new_pixels = []
    for pixel in pixels:
        brilho      = list(pixel)
        brilho[2]   = int(((brilho[2]/100) * fator)*100)
        if brilho[2] > 100:
            brilho[2] = 100
        pixel       = tuple(brilho)
        new_pixels.append(pixel)
    
    return new_pixels

fator = 1.6

image_path = 'image1.jpeg'
rgb_pixels = get_pixels(image_path=image_path)
hsv_pixels = [rgb_to_hsb(pixel) for pixel in rgb_pixels]

hsv_pixels_brilho = filtro_multi_brilho(hsv_pixels, fator)
for pixel1, pixel2 in zip(hsv_pixels, hsv_pixels_brilho):
    print("HSV:", pixel1, " HSV com brilho:", pixel2)

new_rgb_pixels = [hsb_to_rgb(pixel) for pixel in hsv_pixels_brilho]
image_width, image_height = Image.open(image_path).size
new_image = create_image(new_rgb_pixels, image_width, image_height)
new_image.save('image_brilho.jpeg')
