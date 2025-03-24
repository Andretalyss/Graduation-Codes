#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUCKET_MAX 179

typedef struct car{
    char placa[8];
    struct car *next;
}car;

int CharToInt(char *k);
unsigned int Hash(char *k);
void InitHash(car **c);
void InsertPlace(car **c, char *p);

int main(){
    car *cars[BUCKET_MAX];
    char auxiliar[8];

    InitHash(cars);
    while(1){
        printf("Insira uma placa: ");
        fgets(auxiliar,8,stdin);
        
        if(auxiliar[strlen(auxiliar)-1] == '\n')
            auxiliar[strlen(auxiliar)-1] = '\0';

        if(auxiliar[0] == 's')
            break;
    
        InsertPlace(cars, auxiliar);
        getchar();

    }

    for(int i=0;i<BUCKET_MAX;i++){
        if(cars[i]){
            printf("PLACA %d: %s\n", i, cars[i]->placa);
        }
    }
    return 0;
}

void InsertPlace(car **c, char *p){
    unsigned int hash, reduce_hash;
    hash = Hash(p);
    reduce_hash = hash % BUCKET_MAX;

    if(c[reduce_hash] == NULL){
        c[reduce_hash] = (car*) malloc(sizeof(car));
        strcpy(c[reduce_hash]->placa, p);
        c[reduce_hash]->next = NULL;
    }else{
        car *novo = c[reduce_hash];
        while(novo->next != NULL){
            novo = novo->next;
        }

        novo->next = (car*) malloc(sizeof(car));
        strcpy(novo->next->placa, p);
        novo->next->next = NULL;
    }
}

void InitHash(car **c){
    for(int i=0;i<BUCKET_MAX;i++){
        c[i] = NULL;
    }
}

unsigned int Hash(char *k){
    int i;
    unsigned int hash = 0;
    int place = 1;

    for(i=6;i>=3;i--){
        hash = CharToInt(&k[i]);
        place *= 10;
    }

    for(i=2;i>=0;i--){
        hash = hash + (k[i] - 'A') * place;
        place *= 26;
    }

    return hash;
}


int CharToInt(char *k){
    int x;
    x = atoi(k);
    return x;
}