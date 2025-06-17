#include "listas_enlazadas.h"
#include <stdio.h>
#include <stdlib.h>

Nodo* insertar_nodo_final(Nodo* primero, int dato) {
        Nodo* nuevo_nodo = (Nodo*)malloc(sizeof(Nodo));
        nuevo_nodo->dato = dato;
        nuevo_nodo->next = NULL;
        primero = nuevo_nodo;
        return primero;
}

Nodo* insertar_nodo_inicial(Nodo* primero, int dato) {
        Nodo* nuevo_nodo2 = (Nodo*)malloc(sizeof(Nodo));
        nuevo_nodo2->dato = dato;
        nuevo_nodo2->next = primero;
        primero = nuevo_nodo2;

        return primero;
}

Nodo* insertar_nodo_indiceesp(Nodo* primero, int dato) {
        Nodo* actual = primero;
        Nodo* nodo_esp = (Nodo*)malloc(sizeof(Nodo));
        nodo_esp->dato = dato;
        nodo_esp->next = actual->next;
        actual->next = nodo_esp;

        return primero;
}

Nodo* obtener_nodo(Nodo* primero, int dato) {
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
                        previo = actual;
                        actual = actual->next;
                } else {
                        previo->next = actual->next;
                        free(actual);
                        break;
                }
        }
}

void imprimir_lista(Nodo* primero) {
        Nodo* actual = primero;
        while (actual != NULL) {
                printf("%d ", actual->dato);
                actual = actual->next;
        }
        printf("\n");
}

void liberar_nodos(Nodo* primero) {
        Nodo* actual = primero;
        while (actual != NULL) {
                Nodo* temp = actual;
                actual = actual->next;
                free(temp);
        }
}

