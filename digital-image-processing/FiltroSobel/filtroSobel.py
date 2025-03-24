import cv2
import numpy as np
from PIL import Image
import matplotlib.pyplot as plt
import numpy as np

#Carrega a imagem
imagem = cv2.imread('arara_dis.jpeg')


#Verifica se a imagem foi carregada corretamente
if imagem is None:
    print('Erro ao carregar a imagem')
else:
    # Exibe as dimensões da imagem
    altura, largura, canais = imagem.shape
    print('Dimensões da imagem:', altura, 'x', largura)

    # Converte a imagem para uma matriz numpy
    matriz_imagem = imagem

#Separando a imagem em matrizes por canal de cor
b, g , r = cv2.split(matriz_imagem)

# #Lendo arquivo da mascara do filtro
# counter_line = 0
# with open('filtros.txt', 'r') as file:
#     if counter_line == 0:
#         linha = file.readline().strip().split(',')
#         num_linhas = int(linha[0])
#         num_colunas = int(linha[1])
#         counter_line += 1

#     #Criando a matriz da mascara apartir de m x n definidos no arquivo 
#     mascara = np.zeros((num_linhas, num_colunas), dtype=int)
#     #print(mascara)
    
#     linha = file.readline().strip()
#     i=0
#     #Colocando enfim os valores da mascara do filtro na matriz
#     while linha:
#         #print(linha)
#         mascara[i:, 0:num_colunas] = linha.split(',')
#         counter_line += 1
#         linha = file.readline().strip()
#         i= i+1

horizontal = {}
vertical = {}

sobel_v = np.array([[-1, 0, 1,],
                  [-2, 0, 2],
                  [-1, 0, 1]])

sobel_h = np.array([[-1, -2, -1,],
                  [0, 0, 0],
                  [1, 2, 1]])

#print(mascara)

#Inicializando a matriz que guardara o novos valores de R G B da imagem
new_matriz_v = matriz_imagem
new_matriz_h = matriz_imagem

#Criando matriz auxiliar para ajudar nas operações
matriz_aux1 = np.zeros((3, 3), dtype=int)
matriz_aux2 = np.zeros((3, 3), dtype=int)
#Loop que fará o filtro percorrer toda a imagem
for x in range(altura-1):
    for y in range(largura-1):
        #Verificando se o filtro não ultrapassara a imagem
        if (y-1 >=0) and y < (largura-2) and (x - 1 >= 0) and x < (altura-2):
            
            #Coletando valores do canal R para a matriz auxiliar 3x3
            matriz_aux1[:, :] = r[x-1:x+2 , y-1:y+2]
            matriz_aux2[:, :] = r[x-1:x+2 , y-1:y+2]

            #Realizando a correlação do sobel vertical
            matriz_aux1 = matriz_aux1 * sobel_v 
            soma_r_v = abs(np.sum(matriz_aux1))
            #E do sobel horizontal
            matriz_aux2 = matriz_aux2 * sobel_h
            soma_r_h = abs(np.sum(matriz_aux2))


            #Coletando valores do canal G para a matriz auxiliar 5x5
            matriz_aux1[:, :] = g[x-1:x+2 , y-1:y+2]
            matriz_aux2[:, :] = g[x-1:x+2 , y-1:y+2]
            
            #Realizando a correlação do sobel vertical
            matriz_aux1 = matriz_aux1 * sobel_v
            soma_g_v = abs(np.sum(matriz_aux1))
            #E do sobel horizontal
            matriz_aux2 = matriz_aux2 * sobel_h
            soma_g_h = abs(np.sum(matriz_aux2))

            #Coletando valores do canal B para a matriz auxiliar 5x5
            matriz_aux1[:, :] = b[x-1:x+2 , y-1:y+2]
            matriz_aux2[:, :] = b[x-1:x+2 , y-1:y+2]

            #Realizando a correlação do sobel vertical
            matriz_aux1 = matriz_aux1 * sobel_v
            soma_b_v = abs(np.sum(matriz_aux1))
            #E do sobel horizontal
            matriz_aux2 = matriz_aux2 * sobel_h
            soma_b_h = abs(np.sum(matriz_aux2))
 

            cinza_v = min(soma_b_v, soma_g_v, soma_r_v)

            if not f"{cinza_v}" in vertical:
                vertical[f"{cinza_v}"] = 1

            else:
                vertical[f"{cinza_v}"] = vertical[f"{cinza_v}"]+1
            

            cinza_h = min(soma_b_h, soma_g_h, soma_r_h)

            if not f"{cinza_h}" in horizontal:
                horizontal[f"{cinza_h}"] = 1

            else:
                horizontal[f"{cinza_h}"] = horizontal[f"{cinza_h}"]+1
            

            #Salvando os novos valores de RGB
            new_matriz_v[x][y] = int(abs(soma_r_v)) , int(abs(soma_g_v)), int(abs(soma_b_v))
            new_matriz_h[x][y] = int(soma_r_h) , int(soma_g_h), int(soma_b_h)
        
        else:
            
            cinza_v = min(r[x][y], b[x][y], g[x][y])

            if not f"{cinza_v}" in vertical:
                vertical[f"{cinza_v}"] = 1

            else:
                vertical[f"{cinza_v}"] = vertical[f"{cinza_v}"]+1
            
            
            cinza_h = min(r[x][y], b[x][y], g[x][y])
            
            if not f"{cinza_h}" in horizontal:
                horizontal[f"{cinza_h}"] = 1

            else:
                horizontal[f"{cinza_h}"] = horizontal[f"{cinza_h}"]+1
            

            #Caso o filtro ultrapasse a imagem, atribue os valores originais   
            new_matriz_v[x][y] = r[x][y] , g[x][y], b[x][y]
            new_matriz_h[x][y] = r[x][y] , g[x][y], b[x][y]

for i,j in vertical.items():
    print("key = " , i , "valor = ", j)

valores_v = list(vertical.values())

plt.hist(valores_v, bins=10, color='blue', edgecolor='black')

plt.xlabel('Valores')
plt.ylabel('Frequência')
plt.title('Histograma dos Valores do Dicionário')

plt.savefig('histograma-v.png')
#Criando a imagem filtrada com sobel horizontal a partir da matriz 
new_imagem = Image.fromarray(new_matriz_h)
new_imagem.save('new-arara-h.jpeg')

#Criando a imagem filtrada com sobel vertical a partir da matriz 
new_imagem = Image.fromarray(new_matriz_v)
new_imagem.save('new-arara-v.jpeg')