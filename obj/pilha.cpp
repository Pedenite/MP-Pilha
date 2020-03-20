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
        printf("%d -- %d\n", i, p->elem[i]);
    }
}

void destroyStack(Pilha *p){
    free(p->elem);
    p->i = 0;
    p->tam = 0;
}
