#include <stdio.h>
#include <stdlib.h>

// Crie uma função capaz de multiplicar uma linha de uma matriz por um dado número. 
// Faça o mesmo para uma coluna.

void mostramatriz(int k, int a[k][k]){
    int i,j;
    for (i=0; i<k; i++)
    {
        for (j=0; j<k; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void multiplicamatriz(int k, int a[k][k]){ 
    int i, mult, e, o;
    printf("Por quanto deseja multiplicar? ");
    scanf("%d", &mult); 
    printf("Deseja multiplar linha ou coluna? Linha (1) Coluna (2): ");
    scanf("%d", &e);
            
    if (e == 1)
    {    
        printf("Qual linha deseja multiplicar? ");
        scanf("%d", &o);
        for (i = 0; i < k; i++)
        {
            a[o][i] = a[o][i]*mult;
        }
    }

    if (e == 2)
    {
        printf("Qual coluna deseja multiplicar? ");
        scanf("%d", &o);
        for (i = 0; i < k; i++)
        {
            a[i][o] = a[i][o]*mult;
        }
    }
    else if (o > 2)
    {
        printf("Entrada Invalida!");
    }
}

int main () 
{
    int k, i, j;
    
    printf("Digite a dimensao da matriz quadrada: ");
    scanf("%d", &k);

    int a[k][k];

    printf("\nDigite os valores da matriz\n");
    for (i=0; i<k; i++)
    {
        printf("Digite os valores para a %d linha: ", i+1);
        for (j=0; j<k; j++)
            scanf("%d", &a[i][j]);

    }

    //Multiplicação
    printf("A matriz original digitada:\n");
    mostramatriz(k, a);

    printf("\nA matriz final ficou:\n");
    multiplicamatriz(k, a);
    mostramatriz(k, a);
}