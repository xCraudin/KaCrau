#include <stdio.h>

// Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. 
// Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. 
// A partir da média, informar o conceito de acordo com a tabela:

int main(){

    float N1, N2, N3, ME;
    
    printf("Digite a nota 1: ");
    scanf ("%f", &N1);

    printf ("Digite a nota 2: ");
    scanf ("%f", &N2);

    printf ("Digite a nota 2: ");
    scanf ("%f", &N3);

    printf ("Nota dos exercícios: ");
    scanf ("%f", &ME);

    float MA = (N1 + N2*2 + N3*3 + ME)/7;

    if (MA >= 9) printf ("A");
    if (MA >= 7.5 && MA < 9) printf("B");
    if (MA >= 6 && MA < 7.5) printf ("C");
    if (MA >= 4 && MA < 6) printf ("D");
    if (MA < 4) printf ("E");
}