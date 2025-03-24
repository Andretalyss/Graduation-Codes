#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data{
    char key;
    struct data *proximo;
    char dados[15];
}data;

int FunctionHashSimple(char key){
    return key - 'A';
}

int main(){ 
    data * dados[26];
    char key;
    int ind;

    for(int i=0;i<26;i++){
       dados[i] = NULL;
    }

    int i=0;
    while(i<6){
    printf("Entre com uma chave: ");
    scanf("%c", &key);
    getchar();

    ind = FunctionHashSimple(key);

    if(dados[ind]){
        data *new;
        new = (data*) malloc(sizeof(data));
        new->key = key;
        fgets(new->dados,15,stdin);
        if(new->dados[strlen(new->dados)-1] == '\n')
            new->dados[strlen(new->dados)-1] = '\0';

        new->proximo = dados[ind];
        dados[ind] = new;
    }else{
        dados[ind] = (data*) malloc(sizeof(data));
        dados[ind]->key = key;
        fgets(dados[ind]->dados,15,stdin);
        if(dados[ind]->dados[strlen(dados[ind]->dados)-1] == '\n')
            dados[ind]->dados[strlen(dados[ind]->dados)-1] = '\0';

        dados[ind]->proximo = NULL;
    }

    i++;
    }


    for(int i=0;i<26;i++){
        while(dados[i]){
            printf("Key %c: %s\n", dados[i]->key, dados[i]->dados);

            dados[i] = dados[i]->proximo;
        }
    }


    return 0;
}