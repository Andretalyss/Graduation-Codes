from PIL import Image

def get_pixels(image_path):
    image = Image.open(image_path)
    pixels = list(image.getdata())
    return pixels

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

def create_image(pixels, image_width, image_height):
    image = Image.new('RGB', (image_width, image_height))
    image.putdata(pixels)
    return image

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

def insere_saturacao_imagem(pixels, s_values):
    new_pixels = []
    for pixel, s in zip(pixels, s_values):
        pixel_to_modify = list(pixel)
        pixel_to_modify[1] = s
        pixel = tuple(pixel_to_modify)
        new_pixels.append(pixel)
    
    return new_pixels

def retorna_saturacao(pixels):
    s_values = []

    for pixel in pixels:
        s_values.append(pixel[1])
    
    return s_values

## IMAGEM 1
image_path = 'image1.png'
rgb_pixels = get_pixels(image_path=image_path)
hsv_pixels = [rgb_to_hsb(pixel) for pixel in rgb_pixels]
hsv_pixels_saturacao = retorna_saturacao(hsv_pixels)

## IMAGEM 2
image2_path = 'image2.jpeg'
rgb2_pixels = get_pixels(image_path=image2_path)
hsv2_pixels = [rgb_to_hsb(pixel) for pixel in rgb2_pixels]

## SATURA IMAGEM 2 COM IMAGEM 1
hsv_saturado = insere_saturacao_imagem(hsv2_pixels, hsv_pixels_saturacao)

## RETORNA PARA RGB
rgb_final_pixels = [hsb_to_rgb(pixel) for pixel in hsv_saturado]
image_width, image_height = Image.open(image2_path).size
rgb_image = create_image(rgb_final_pixels, image_width, image_height)
rgb_image.save('image3-saturada.jpeg')

for pixel1, pixel2, pixel3 in zip(hsv_pixels, hsv2_pixels, hsv_saturado):
    print("HSV Image 1:", pixel1, " HSV Image 2:", pixel2, " HSV Saturado:", pixel3)

for pixel_rgb1, pixel_rgb2 in zip(rgb2_pixels, rgb_final_pixels):
    print("RGB Original:", pixel_rgb1, " RGB Saturado:", pixel_rgb2)