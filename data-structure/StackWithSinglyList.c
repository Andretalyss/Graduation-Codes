#include <stdio.h>
#include <stdlib.h>

typedef struct List{
    int size;
    struct NodeOfPile* head;
    struct NodeOfPile* tail;
}List;

typedef struct NodeOfPile{
    int value;
    struct NodeOfPile* next;

}NodeOfPile;

void initialize(List *n){
    
    n->size = 0;
    n->head = NULL;
    n->tail = NULL;
}

void push(List *n, int value){
    NodeOfPile *new = (NodeOfPile*) malloc(sizeof(NodeOfPile));

    if(n->head == NULL){
        n->head = new;
        n->tail = new;
        new->next = NULL;
        new->value = value;
        n->size++;

    }else{

        new->next = n->tail;
        n->tail = new;
        new->value = value;
        n->size++;
    }
}

void print(List *p){
    
    if(p->size == 0){
        printf("Empty Pile\n");
    }
    else if(p->tail){
        printf("\n\n ---  TOP OF PILE ---\n\n");
        while(p->tail){
        printf("     ---  %d  --- \n", p->tail->value);
        p->tail = p->tail->next;
    }
        printf("\n --- FLOOR OF PILE ---\n\n\n");
    
    
}}

int pop(List *n){   
    NodeOfPile *remov;
    
    if(n->size == 0)
        return 0;
    
    remov = n->tail;
    if(n->size > 1)
        n->tail = n->tail->next;
    
    free(remov);
    n->size--;
   
   return 1;
}

int main(int argc, char*argv[]){
    char choice;
    List* p;
    p = (List*) malloc(sizeof(List));
    initialize(p);

    printf("What's your choice?\n");

    do{  
        printf("\e[H\e[2J");
        printf("[1]Add {push} or [0]Remove {pop} or any for print -> ");  
        scanf("%s", &choice);
        if(choice != '1' && choice != '0')
            break;

        if(choice){
            printf("Enter with the value: ");
            int value;
            scanf("%d", &value);
            push(p, value);

        }else{
            int aux = pop(p);
            if(aux){
                printf("\n~> The last add was deleted <~\n\n");
            }else{
                printf("Empty Pile\n");
                return 0;
        
        }}}while(1);

    printf("Consult Pile:\n");
    print(p);
        

    return 0;
}