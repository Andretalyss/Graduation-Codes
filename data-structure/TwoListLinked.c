#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    int value;
    struct list * next;
}list;

void adicionando(list **n, int value){
    if(!(*n)){
        *n = (list*) malloc(sizeof(list));
        (*n)->value = value;
        (*n)->next = NULL;
    }
    else{
        struct list *aux = *n;
        while( aux->next){ 
            aux = aux->next;
        }

        aux->next = (list*) malloc(sizeof(list));
        aux->next->value = value; 
        aux->next->next = NULL;
        }

}


void merge(list *l1, list *l2){
    list *aux1 , *aux2;
    aux1 = l1->next;
    l1->next = l2;

    while(l2){
        aux2 = l2->next;
        l2->next = aux1;
        l2 = aux1;
        aux1 = aux1->next;
        l2->next = aux2;
        l2 = aux2;
    }   
}

void print(list *l){
    while(l){
        printf(" ---- %d  ----- \n ", l->value);
        l = l->next;
    }

    printf("\n\n");
}

int main(){
    list *l1 = NULL;
    list *l2 = NULL;
    int valores;
    
    printf("Insira os números da lista1: ");
    for(int i=0;i<4;i++){
        scanf("%d", &valores);
        adicionando(&l1,valores);
    }
    
    printf("Insira os números da lista2: ");
    for(int i=0;i<3;i++){
        scanf("%d", &valores);
        adicionando(&l2,valores);
    }

    print(l1);
    print(l2);

    merge(l1, l2);

    print(l1);

    return 0;
}