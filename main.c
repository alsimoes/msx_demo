#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char nome[50];
} Pessoa;

int main() {
    Pessoa *p;

    // Alocando memória para uma estrutura Pessoa
    p = (Pessoa *)malloc(sizeof(Pessoa));
    if (p == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Inicializando os membros da estrutura
    p->id = 1;
    snprintf(p->nome, sizeof(p->nome), "João");

    // Acessando os membros da estrutura
    printf("ID: %d\n", p->id);
    printf("Nome: %s\n", p->nome);

    // Liberando a memória alocada
    free(p);

    return 0;
}