#include <stdio.h>

int main() {
    char str[] = "Olá, mundo!";
    char *p = str; // Ponteiro para o início da string

    // Percorrendo e imprimindo cada caractere usando o ponteiro
    while (*p != '\0') { // '\0' indica o fim da string
        printf("%c ", *p); // Acessa o caractere apontado por p
        p++; // Move o ponteiro para o próximo caractere
    }

    // Modificando a string usando o ponteiro
    p = str; // Reinicia o ponteiro para o início da string
    *p = 'A'; // Altera o primeiro caractere
    printf("\nString modificada: %s\n", str);

    return 0;
}