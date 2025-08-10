#include <stdio.h>

void imprimirArray(int *arr, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("arr[%d] = %d\n", i, *(arr + i));
    }
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    imprimirArray(numeros, tamanho);

    return 0;
}