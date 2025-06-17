#include "doblemente_enlazadas.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
        Nodo* primero = NULL;
        Nodo* temp = NULL;

        primero = insertar_final(primero, 8);
        primero = insertar_inicial(primero, 3);
        primero = insertar_nodoesp(primero, 5);

        printf("Lista: ");
        imprimir_lista_adelante(primero);

        temp = buscar_nodo(primero, 8);
        if (temp != NULL) {
                printf("El nodo encontrado es: %d\n", temp->dato);
        } else {
                printf("No se encontró el nodo buscado\n");
        }

       eliminar_nodo(primero, 5);
       printf("La lista al eliminar el 5 es: ");
       imprimir_lista_adelante(primero);

       imprimir_lista_alreves(primero);

       return 0;
}

