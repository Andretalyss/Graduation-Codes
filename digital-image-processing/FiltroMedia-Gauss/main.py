from PIL import Image
import numpy as np
from gauss import filtro_gaussiano

## Pega os valores RGB em cada pixel da imagem.
def get_pixels(image_path):
    image = Image.open(image_path)
    pixels = list(image.getdata())
    return pixels

## Cria uma nova imagem com pixels rgb
def create_image(pixels, image_width, image_height):
    image = Image.new('RGB', (image_width, image_height))
    image.putdata(pixels)
    return image

## Ler os arquivos do filtro.txt e armazena em arrays para diferenciar os tipos de filtro (media e gauss)
def read_filter_file(file_path):
    matriz = []
    num_linhas = []
    num_colunas = []
    with open(f"{file_path}", 'r') as arq:
        linha = arq.readline().strip().split(',')
        while len(linha) != 1:
            if len(linha) == 2:
                num_linhas.append(int(linha[0]))
                num_colunas.append(int(linha[1]))
            else:
                matriz.append(linha)
            
            linha = arq.readline().strip().split(',')

    return matriz, num_linhas, num_colunas

## Calcula media dos pixels (Usado no filtro de media)
def calcula_media(matriz):
    media = 0
    for k in matriz:
        for i in k:
            media += float(i)
    return media

## Executa o filtro de media nos pixels.
def exec_filtro_de_media(width, height, pixels, pixels_dict, num_colunas, filtro, media_value):
    i = 0
    index_filter = 0
    for y in range(height): # Percorre toda a altura da imagem
        for x in range(width):  # Percorre toda a largura da imagem
            if (x+num_colunas) < width: # Verifica se o pixel atual + NUM_COLUNAS não ultrapassa o limite de largura da imagem. (Sem extensão por zeros.)
                counter = 0 
                r,g,b = 0,0,0
                aux = x
                
                for value in filtro:    # Percorre a matriz dos filtros de media.
                    while counter < num_colunas:    # Executa até o contador chegar no número total de colunas do filtro.
                        rgb = pixels_dict[f"({aux},{y})"]   # Pega os valores rgb do pixel do dicionario auxiliar.
                        r += rgb[0]*float(value[counter])   # Multiplica o valor R do pixel pelo indice do filtro.
                        g += rgb[1]*float(value[counter])   # Multiplica o valor G do pixel pelo indice do filtro.
                        b += rgb[2]*float(value[counter])   # Multiplica o valor B do pixel pelo indice do filtro.
                        aux += 1    # Incrementa valor do aux, que simula o valor da coluna que estamos percorrendo.
                        counter += 1
                
                r = round(r/media_value)    # Calcula a média do pixel R
                g = round(g/media_value)    # Calcula a média do pixel G
                b = round(b/media_value)    # Calcula a média do pixel B

                rgb = list(pixels[i])   # Pega o pixel atual como auxiliar.
                rgb[0] = r  # Substitui o pixel R pelo calculado.
                rgb[1] = g  # Substitui o pixel G pelo calculado.
                rgb[2] = b  # Substitui o pixel B pelo calculado.
                pixels[i] = tuple(rgb)  # substitui o pixel I pelo novo pixel substituido.
                i+=1
            else:
                i+=1

    return pixels  # Retorna todos os pixels modificados.

file = 'filtros.txt' 
matriz, num_linhas, num_colunas = read_filter_file(file) # Chama função para ler arquivo, retornando matriz de filtro, num linhas e colunas.

image_path = 'frutas.png'
largura, altura = Image.open(image_path).size
pixels = get_pixels(image_path=image_path)
pixels_dict = {} # Dicionário auxiliar que armazena os pixels baseado no (x,y)

i=0
for y in range(altura):
    for x in range(largura):
        pixels_dict[f"({x},{y})"] = pixels[i]
        i+=1

i=0
index_filter=0
filtro = []
for k in range(0,len(num_linhas)): # For que percorre o tamanho do array do n_linhas.
    for n_linhas in range(0,num_linhas[k]): # Percorre o número de linhas em um indice do array de linhas.
        filtro.append(matriz[index_filter]) # Adicionar o index atual no array do filtro.
        index_filter += 1   # Incrementa o index para captar o proximo indice do filtro até chegar no limite das linhas.

    if k == 0:  # Se k for 0, significa que o primeiro filtro está sendo executado (media)
        media_value = calcula_media(filtro) # Recebe o valor da media dos pixels do filtro.
        pixels = exec_filtro_de_media(largura, altura, pixels, pixels_dict, num_colunas[k], filtro, media_value)
        new_image = create_image(pixels, largura, altura) # Recebe os pixels da função de media e cria uma nova imagem.
        new_image.save('image-media.png')   # Salva imagem.
    else:
        mascara = np.zeros((num_linhas[k], num_colunas[k]), dtype=int)
        for value in filtro:
            mascara[i:, 0:num_colunas[k]] = value
            i+=1
            
        filtro_gaussiano(image_path, num_linhas[k], num_colunas[k], mascara)

    filtro = []