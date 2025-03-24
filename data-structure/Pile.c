#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ListElement{
    char *dado;
    struct ListElement *seguinte;

}Elemento;

typedef struct DetectedList{
    Elemento *inicio;
    int tamanho;

}Pilha;

void inicialization(Pilha *value){
    value->inicio = NULL;
    value->tamanho = 0;   
}

int empiler(Pilha *value, char *dado){
    Elemento *novo_elemento;

    if((novo_elemento = (Elemento *) malloc(sizeof(Elemento))) == NULL)
        return -1;
    if((novo_elemento->dado = (char *) malloc(50 * sizeof (char))) == NULL)
        return -1;

    strcpy(novo_elemento->dado, dado);
    novo_elemento->seguinte = value->inicio;
    value->inicio = novo_elemento;
    value->tamanho++;
}

int desimpiler(Pilha *value){
    Elemento *remov;

    if(value->tamanho == 0)
        return -1;

    remov = value->inicio;
    value->inicio = value->inicio->seguinte;

    free(remov);
    value->tamanho--;

    return 0;
}

void exibe(Pilha *value){
    Elemento *inCurse = value->inicio;
    int i;
    //inCurse = value->inicio;

    for(i=0;i<value->tamanho;++i){
        printf("\t\t%s\n", inCurse->dado);
        inCurse = inCurse->seguinte;
    
    }
}

void print(Pilha *monte){
    printf("A pilha tem (%d elementos): \n", monte->tamanho);
    printf("\n --- > Topo da PILHA \n");
    //PRINTANDO A PILHA NA TELA
    exibe(monte);
    printf("\n --->  Rodapé da Pilha \n\n");
    
}

int main(){
    Pilha *monte;
    char *nome;

    if((monte = (Pilha *) malloc(sizeof (Pilha))) == NULL)
        return -1;
    if((nome = (char *) malloc(50 * sizeof (char))) == NULL)
        return -1;
    
    //INICIALIZANDO COM INICIO NULL E TAMANHO 0
    inicialization(monte);

    printf("Entre uma palavra:");
    scanf("%s", nome);

    //EMPILHANDO - colocando na pilha
    empiler(monte,nome);

    print(monte);

    printf("Entre uma palavra:");
    scanf("%s", nome);

    //EMPILHANDO - colocando na pilha
    empiler(monte, nome);

    print(monte);

    printf("\nO ultimo entrado será excluido\n");
    //EXCLUINDO DADO DO TOPO DA PILHA
    desimpiler(monte);

    print(monte);

    return 0;
}