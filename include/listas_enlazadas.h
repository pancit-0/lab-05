#ifndef LISTAS_ENLAZADAS_H
#define LISTAS_ENLAZADAS_H

struct Nodo {
        int dato;
        struct Nodo* next;
};

typedef struct Nodo Nodo;

Nodo* insertar_nodo_final(Nodo* primero, int dato);
Nodo* insertar_nodo_inicial(Nodo* primero, int dato);
Nodo* insertar_nodo_indiceesp(Nodo* primero, int dato);
Nodo* obtener_nodo(Nodo* primero, int dato);
void eliminar_nodo(Nodo* primero, int dato);
void imprimir_lista(Nodo* primero);
void liberar_nodos(Nodo* primero);

#endif
