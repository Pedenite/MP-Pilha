
typedef struct pilha{
    int *elem;
    int tam;
    int i;
}Pilha;

void push(Pilha *p, int val);       //coloca elemento no topo da pilha
void pop(Pilha *p);                 //retira elemento do topo da pilha
int top(Pilha *p);                  //retorna elemento do topo da pilha sem modificar a pilha.
int size(Pilha *p);                 //retorna tamanho da pilha
void setSize(Pilha *p, int size);   //muda o tamanho da pilha
int isFull(Pilha *p);               //retorna verdadeiro se a pilha está cheia
int isEmpty(Pilha *p);              //retorna verdadeiro se a pilha está vazia
void createStack(Pilha *p, int n);  //cria pilha
void showStack(Pilha *p);           //imprime pilha
void destroyStack(Pilha *p);        //destrói pilha