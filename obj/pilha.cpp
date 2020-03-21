#include <stdio.h>
#include <stdlib.h>
#include "../include/pilha.hpp"
#define TRUE 1
#define FALSE 0

void push(Pilha *p, int val){
    if(p->i >= p->tam){
        printf("Stack position limit reached, try increasing stack size\n");
        return;
    }
    p->elem[p->i] = val;
    p->i++;
}

void pop(Pilha *p){
    p->elem[p->i-1] = 0;
    p->i--;
}

int top(Pilha *p){
    return p->elem[p->i-1];
}   

int size(Pilha *p){
    return p->tam;
}   

void setSize(Pilha *p, int size){
    if(p->tam == 0){
        printf("\033[0;31m"); //Set the text to the color red.
        printf("Error: Create the stack with at least 1 position first\n");
        printf("\033[0m"); //Resets the text to default color
        return;
    }
    p->elem = (int *) realloc(p->elem, sizeof(int)*size);
    p->tam = size;
}   

int isFull(Pilha *p){
    if(p->i == p->tam){
        return TRUE;
    }else{
        return FALSE;
    }
}   

int isEmpty(Pilha *p){
    if(p->i == 0){
        return TRUE;
    }else{
        return FALSE;
    }
}   

void createStack(Pilha *p, int n){
    p->elem = (int *) calloc(n, sizeof(int));
    p->tam = n;
}

void showStack(Pilha *p){
    int i;
    for(i = 0; i < p->tam; i++){
        printf("%d -- %d", i, p->elem[i]);
        if(i == p->i-1){
            printf(" <-- TOP");
        }
        printf("\n");
    }
}

void destroyStack(Pilha *p){
    if(p->tam == 0){
        printf("\033[0;31m"); //Set the text to the color red.
        printf("Error: Cannot destroy a non existing stack or a stack with size 0\n");
        printf("\033[0m"); //Resets the text to default color
        return;
    }
    free(p->elem);
    p->i = 0;
    p->tam = 0;
}
