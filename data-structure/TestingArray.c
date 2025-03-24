#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 60

typedef struct stack{
    char *dado;
    struct stack *next;

}Pile;

typedef struct head{
    int size;
    Pile *begin;

}PileHead;

void empiler(PileHead *m, char* dado){
    Pile *element;

    element = (Pile*) malloc (sizeof(Pile));
    element->dado = (char*) malloc(50*sizeof(char));

    strcpy(element->dado,dado);
    element->next = m->begin;
    m->begin = element;
    m->size++;

}

void exibe(PileHead *m){
    Pile *inCurse = m->begin;
    int i;

    for(i=0;i<m->size;i++){
        printf("%s\n", inCurse->dado);
        inCurse = inCurse->next;
    }
}    

int main(){

    PileHead *mount;
    char string[MAX];
    char aux;

    mount = (PileHead*) malloc(sizeof(PileHead));

    printf("Digite a string: ");
    fgets(string,MAX,stdin);

    printf("%ld\n", strlen(string));
    for(int i=0; i<strlen(string); i++){
        empiler(mount,&string[i]);        
    }

    exibe(mount);

    return 0;
}