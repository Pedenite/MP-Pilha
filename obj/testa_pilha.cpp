#include <stdio.h>
#include "../include/pilha.hpp"
#define TRUE 1
#define FALSE 0

int menu(){
    printf("---------------- Test Stack -------------------\n");
    printf("0 -> push\n1 -> pop\n2 -> top\n3 -> size\n4 -> setSize\n");
    printf("5 -> isFull\n6 -> isEmpty\n7 -> createStack\n8 -> showStack\n9 -> destroyStack\n");
    printf("-1 -> exit\nEnter your option >>> ");
    int n;
    scanf("%d", &n);
    return n;
}

void opt(int n, Pilha *p, int *exit){
    int a;
    switch(n){
        case 0:
            printf("Type the value to be pushed to the stack >>> ");
            scanf("%d", &a);
            push(p, a);
            break;
        case 1:
            pop(p);
            break;
        case 2:
            printf("The top of the stack is %d\n", top(p));
            break;
        case 3:
            printf("Stack size is %d\n", size(p));
            break;
        case 4:
            printf("Type the new size of the stack >>> ");
            scanf("%d", &a);
            setSize(p, a);
            break;
        case 5:
            a = isFull(p);
            if(a == TRUE){
                printf("Stack is full\n");
            } else {
                printf("Stack is not full\n");
            }
            break;
        case 6:
            a = isEmpty(p);
            if(a == TRUE){
                printf("Stack is empty\n");
            } else {
                printf("Stack is not empty\n");
            }
            break;
        case 7:
            printf("Type the initial size of the stack >>> ");
            scanf("%d", &a);
            createStack(p, a);
            break;
        case 8:
            showStack(p);
            break;
        case 9:
            destroyStack(p);
            break;
        case -1:
            *exit = TRUE;
            break;
        default:
            printf("Please type a valid option!\n");
            break;
    }
}

int main(){
    Pilha p;
    p.i = 0;
    p.tam = 0;
    int exit = 0;

    while(exit == FALSE){
        int o = menu();
        opt(o, &p, &exit);
    }

    return 0;
}