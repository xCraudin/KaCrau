#include <stdio.h>
#include <stdlib.h>

// Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.

void removercaracter(char Str[100], int posicao)
{
    for (posicao; posicao < 100; posicao++)
    {
        Str[posicao] = Str[posicao+1];
    }
}

int main()
{
    char Str[100];
    int posicao;

    printf("Digite uma palavra: ");
    fgets(Str, 100, stdin);

    printf("Digite a posicao do caracter: ");
    scanf("%i", &posicao);

    removercaracter(Str, posicao);
    printf("%s", Str);
}