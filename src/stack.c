#include "stack.h"
#include <stdio.h>

//#define MAX_tamaño 100

//typedef struct {
  //      int arreglo[MAX_tamaño];
  //      int top;
//}Stack;

void inicializar(Stack *s) {
        s->top = -1;
}

int si_esta_llena(Stack *s) {
        return s->top == MAX_tamaño - 1;
}

int si_esta_vacia(Stack *s) {
        return s->top == -1;
}

void push(Stack *s, int dato) {
       if (si_esta_llena(s)) {
               printf("Stack completo!\n");
        }
        s->arreglo[++(s->top)] = dato;
}

int pop(Stack *s) {
        if (si_esta_vacia(s)) {
                printf("Stack vacío!\n");
                return -1;
        }
        return s->arreglo[(s->top)--];
}

int top(Stack *s) {
        if (si_esta_vacia(s)) {
                printf("Stack vacío!\n");
                return -1;
        }
        return s->arreglo[s->top];
}


