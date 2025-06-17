#include "doblemente_enlazadas.h"
#include <stdio.h>
#include <stdlib.h>

Nodo* insertar_final(Nodo* primero, int dato) {
        Nodo* nodo_final = (Nodo*)malloc(sizeof(Nodo));
        nodo_final->dato = dato;
        nodo_final->next = NULL;
        nodo_final->previo = NULL;
        primero = nodo_final;

        return primero;
}

Nodo* insertar_inicial(Nodo* primero, int dato) {
        Nodo* nodo_inicial = (Nodo*)malloc(sizeof(Nodo));
        nodo_inicial->dato = dato;
        nodo_inicial->next = primero;
        primero->previo = nodo_inicial;
        primero = nodo_inicial;

        return primero;
}

Nodo* insertar_nodoesp(Nodo* primero, int dato) {
        Nodo* actual = primero;
        Nodo* nodo_esp = (Nodo*)malloc(sizeof(Nodo));
        nodo_esp->dato = dato;
        nodo_esp->next = actual->next;
        nodo_esp->previo = actual->next;
        actual->next->previo = nodo_esp;
        actual->next = nodo_esp;

        return primero;
}

Nodo* buscar_nodo(Nodo* primero, int dato) {
        Nodo* actual = primero;
        while (actual != NULL) {
                if (actual->dato == dato) {
                        return actual;
                }
                actual = actual->next;
        }

        return NULL;
}

void eliminar_nodo(Nodo* primero, int dato) {
        Nodo* actual = primero;
        Nodo* previo = NULL;
        while (actual != NULL) {
                if (actual->dato != dato) {
                        primero = actual;
                } else {
                        previo->next = actual->next;
                }
                free(actual);
                break;
        }
        previo = actual;
        actual = actual->next;
}

void imprimir_lista_adelante(Nodo* primero) {
        Nodo* actual = primero;
        while (actual != NULL) {
                printf("%d ", actual->dato);
                actual = actual->next;
        }
        printf("\n");
}

void imprimir_lista_alreves(Nodo* primero) {
        Nodo* actual = primero;
        if (actual == NULL) return;
        while (actual != NULL) {
                actual = actual->next;
        }
        while(actual != NULL) {
                printf("%d ", actual->dato);
                actual = actual->previo;
        }
        printf("\n");
}

