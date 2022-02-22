#include<stdio.h>
#include<stdlib.h>

// Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. 
// Faça isto com string de C e de C++

#include <stdio.h>

#include <stdlib.h>

int main()
{

    char palavra1[10];

    char palavra2[10];

    int retorno;
    
    printf("Digite o primeiro nome: ");
    scanf("%s", &palavra1);
    printf("Digite o segundo nome: ");
    scanf("%s", &palavra2);

    retorno = strcoll(palavra2, palavra1);

    if(retorno==1)
    {
        printf("\nA Ordem alfabetica seria: \n%s e %s\n\n", palavra1,palavra2);
    }else{
        printf("\nA Ordem alfabetica seria: \n%s e %s\n\n", palavra2,palavra1);
    }
}