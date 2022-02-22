#include <stdio.h>
#include <stdlib.h>

// Faça um programa que crie um vetor de pessoas. 
// Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct. 
// O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir imprimi os dados de todas as pessoas. 
// A struct deve armazenar os dados de idade, peso e altura.

typedef struct 
{
    char nome[50];
    int idade;
    float peso;
    float altura;
}DadosP;

void imprimirPessoas(DadosP p)
{
    printf("\nNome: %s", p.nome);
    printf("\nidade: %d", p.idade);
    printf("\npeso: %.2f", p.peso);
    printf("\naltura: %.2f\n", p.altura);
}

DadosP lerPessoa()
{
    DadosP p;
    printf("\nDigite seu nome: ");
    scanf("%s", p.nome);
    printf("Digite a idade: ");
    scanf("%d", &p.idade);
    
    printf("Digite o Peso: ");
    scanf("%f", &p.peso);
    
    printf("Digite a Altura: ");
    scanf("%f", &p.altura);
    
    return p;
}

int main()
{   
    int i;
    DadosP Pessoas[3];

    for (i = 0; i < 3; i++)
        Pessoas[i] = lerPessoa();

    for (i = 0; i < 3; i++)
        imprimirPessoas(Pessoas[i]);

    return 0;
}
