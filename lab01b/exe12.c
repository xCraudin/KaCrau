#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Faça uma função que retorne a posição de um dado caracter dentro de uma string.

int buscar(char str[50], char query) {
    int i, posicao = 0;

    for (i = 0; i < strlen(str); i++){
        posicao = i+1;
        if (query == str[i]){
            printf("A letra procurada esta presente na posicao %d\n", posicao);
        }
    } 
}

int main()
{
    char palavra[50];
    char letra;
    printf("Digite uma palavra: ");
    gets(palavra);

    printf("Palavra digitada: %s\n", palavra);

    printf("Qual a letra? ");
    letra = getchar();

    buscar(palavra, letra);
}
