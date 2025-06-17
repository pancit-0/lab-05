#include "listas_enlazadas.h"
#include <stdio.h>

int main() {
        Nodo* primero = NULL;

        primero = insertar_nodo_final(primero, 10);
        primero = insertar_nodo_inicial(primero, 7);
        primero = insertar_nodo_indiceesp(primero, 3);
        primero = obtener_nodo(primero, 7);
        printf("El nodo obtenido es: %d\n", primero->dato);

        eliminar_nodo(primero, 3);
        printf("El nodo eliminado es: %d\n", 3);

        imprimir_lista(primero);
        liberar_nodos(primero);

        return 0;
}

