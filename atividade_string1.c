#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ARR 50

void verific_palindromo(char palavra[]);
void verific_letraMIN(char palavra[]);

int main() {
    char palavra[MAX_ARR];
    printf("Digite a palavra ou frase para verificar se é um palíndromo: ");
    fgets(palavra, MAX_ARR, stdin);
    palavra[strlen(palavra) - 1] = '\0'; 
    printf("Palavra digitada: %s\n", palavra);

    verific_palindromo(palavra);
    verific_letraMIN(palavra);

    return 0;
}

void verific_palindromo(char palavra[]) {
    int i, j;
    int tamanho = strlen(palavra);
    char palavra_reversa[MAX_ARR];

    for (i = tamanho - 1, j = 0; i >= 0; i--, j++) {
        palavra_reversa[j] = palavra[i];
    }
    palavra_reversa[j] = '\0';

    if (strcmp(palavra, palavra_reversa) == 0) {
        printf("A palavra/frase é um palíndromo.\n");
    } else {
        printf("A palavra/frase não é um palíndromo.\n");
    }
}

void verific_letraMIN(char palavra[]) {
    int i;
    int tamanho = strlen(palavra);

    for (i = 0; i < tamanho; i++) {
        if (!islower(palavra[i])) {
            printf("A palavra/frase contém pelo menos uma letra maiúscula.\n");
            return 0; 
        }
    }
    printf("A palavra/frase contém apenas letras minúsculas.\n");
}
