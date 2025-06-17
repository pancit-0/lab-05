#ifndef STACK_H
#define STACK_H

//Se define el tipo para los elementos de la pila
#define MAX_tamaño 100

//La estructura que llevará la pila
typedef struct {
        int arreglo[MAX_tamaño];
        int top;
}Stack;

//Se declarán las funciones 
void inicializar(Stack *s);
int si_esta_llena(Stack *s);
int si_esta_vacia(Stack *s);
void push(Stack *s, int dato);
int pop(Stack *s);
int top(Stack *s);

#endif
