#include <stdio.h>
#include <stdlib.h>

// Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.

void adicionarcaracter(char Str[100], int posicao, char letra)
{
    for (int i = 100; i >= 0; i--)
    {
        Str[i] = Str[i-1];
        if (i == posicao)
        {
            Str[posicao] = letra;
            break;
        }
    }
}


int main()
{
    char Str[100];
    char letra;
    int posicao;

    printf("Digite uma palavra: ");
    fgets(Str, 100, stdin);

    printf("Qual a letra? ");
    letra = getchar();

    printf("Digite a posicao do caracter: ");
    scanf("%i", &posicao);
    
    adicionarcaracter(Str, posicao, letra);
    printf("%s", Str);
}