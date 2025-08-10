#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int tamanho = 5;

    // Alocando memória para um array de 5 inteiros
    arr = (int *)malloc(tamanho * sizeof(int));
    if (arr == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Inicializando e imprimindo os valores
    for (int i = 0; i < tamanho; i++) {
        arr[i] = i * 10;
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Liberando a memória alocada
    free(arr);

    return 0;
}