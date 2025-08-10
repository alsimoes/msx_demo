#include <stdio.h>

int main() {
    int x  = 10;
    int *p; // Declaração de um ponteiro para int
    p = &x; // Atribuição do endereço de x ao ponteiro p

    printf("Valor de x : %d\n", x);
    printf("Endereço de x : %p\n", (void*)&x);
    printf("Valor armazenado em p (endereço de x): %p\n", (void*)p );
    printf("Valor apontado por p (valor de x): %d\n", *p);
    x = 20; // Modificando o valor de x
    printf("Valor apontado por p (valor de x): %d\n", *p);

    return 0;
}