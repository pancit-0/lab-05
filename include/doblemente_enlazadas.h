#ifndef DOBLEMENTE_ENLAZADAS_H
#define DOBLEMENTE_ENLAZADAS_H

struct Nodo {
        int dato;
        struct Nodo *next;
        struct Nodo *previo;
};

typedef struct Nodo Nodo;

Nodo* insertar_final(Nodo* primero, int dato);
Nodo* insertar_inicial(Nodo* primero, int dato);
Nodo* insertar_nodoesp(Nodo* primero, int dato);
Nodo* buscar_nodo(Nodo* primero, int dato);
void eliminar_nodo(Nodo* primero, int dato);
void imprimir_lista_adelante(Nodo* primero);
void imprimir_lista_alreves(Nodo* primero);

#endif
