import cv2
import numpy as np
from PIL import Image

def filtro_gaussiano(image_path, num_linhas, num_colunas, mascara):
    #Carrega a imagem
    imagem = cv2.imread(image_path)

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

    # mascara = np.array([[1, 4, 6, 4, 1],
    #                   [4, 16, 24, 16, 4],
    #                   [6, 24, 36, 24, 6],
    #                   [4, 16, 24, 16, 4],
    #                   [1, 4, 6, 4, 1]])
    #print(mascara)

    #Inicializando a matriz que guardara o novos valores de R G B da imagem
    new_matriz = matriz_imagem

    #Criando matriz auxiliar para ajudar nas operações
    matriz_aux = np.zeros((num_linhas, num_colunas), dtype=int)

    #Loop que fará o filtro percorrer toda a imagem
    for x in range(altura-1):
        for y in range(largura-1):
            #Verificando se o filtro não ultrapassara a imagem
            if (y + num_colunas) < largura and (x + num_linhas) < altura:
                #Coletando valores do canal R para a matriz auxiliar 5x5
                matriz_aux[:, :] = r[x:x+num_linhas , y:y+num_colunas]
                #Realizando a correlação 
                matriz_aux = matriz_aux * mascara
                soma_r = (np.sum(matriz_aux))/256

                #Coletando valores do canal G para a matriz auxiliar 5x5
                matriz_aux[:, :] = g[x:x+num_linhas , y:y+num_colunas]
                #Realizando a correlação
                matriz_aux = matriz_aux * mascara
                soma_g = (np.sum(matriz_aux))/256

                #Coletando valores do canal B para a matriz auxiliar 5x5
                matriz_aux[:, :] = b[x:x+num_linhas , y:y+num_colunas]
                #Realizando a correlação
                matriz_aux = matriz_aux * mascara
                soma_b = (np.sum(matriz_aux))/256

                #Salvando os novos valores de RGB
                new_matriz[x][y] = int(soma_r) , int(soma_g), int(soma_b)
            
            else:
                #Caso o filtro ultrapasse a imagem, atribue os valores originais   
                new_matriz[x][y] = r[x][y] , g[x][y], b[x][y]
                
    #Criando a imagem filtrada a partir da matriz 
    new_imagem = Image.fromarray(new_matriz)
    new_imagem.save('image-gauss.png')