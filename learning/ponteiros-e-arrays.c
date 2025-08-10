#include <stdio.h>

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    int *p = numeros; // Aponta para o primeiro elemento do array

    for (int i = 0; i < 5; i++) {
        printf("Usando array: numeros[%d] = %d\n", i, numeros[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Usando ponteiro: *(p + %d) = %d\n", i, *(p + i));
    }

    return 0;
}