#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node* next;
}node;

void append(node ** n, int valor){
    if((!*n)){
        *n = (node*) malloc(sizeof(node));
        (*n)->value = valor; 
        (*n)->next = NULL;
    }
    else{
        struct node* aux = *n;
        while( aux->next){
            aux = aux->next;
        }

        aux->next = (node*) malloc(sizeof(node));
        aux->next->value = valor;
        aux->next->next = NULL;
        }
    }

void printList(node *p){
    printf("\nMostrando a lista:\n");
    if(p){
        while(p){
            printf("  | %d |\n", p->value);
            p=p->next;
        }
    }else
        printf("Lista vazia.");
}

void prepend(node ** n, int valor){
    if(!*n){
        *n = (node*) malloc(sizeof(node));
        (*n)->value = valor;
        (*n)->next = NULL;
    }else{
        struct node *new = (node*) malloc(sizeof(node));
        new->value = valor;
        new->next = *n;
        *n = new;
    }
}

void after(node* n, int valor){
    node *new;
    new = (node*)malloc(sizeof(node));
    new->value = valor;
    new->next = n->next;
    n->next = new;
}

int main(){
    node* element = NULL;
    int valor;

    while(valor != 0){
    printf("Entre com um valor: ");
    scanf("%d", &valor);
    append(&element,valor);
    }
    
    printf("Entre com mais um valor: ");
    scanf("%d", &valor);
    after(element,valor);
    
    printList(element);
    
    return 0;
}