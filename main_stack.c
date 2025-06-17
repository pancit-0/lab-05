#include "stack.h"
#include <stdio.h>

int main() {
        Stack s;
        inicializar(&s);

        push(&s, 50);
        push(&s, 70);
        push(&s, 60);
        push(&s, 40);
        push(&s, 80);
        push(&s, 100);

        printf("Elemento parte superior de la pila: %d\n", top(&s));

        printf("Elemento eliminado: %d\n", pop(&s));
        printf("Elemento eliminado: %d\n", pop(&s));
        printf("Elemento eliminado: %d\n", pop(&s));

        printf("Elemento superior después del pop: %d\n", top(&s));

        return 0;
}
