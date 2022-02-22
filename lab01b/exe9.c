#include <stdio.h>
#include <stdlib.h>

// Crie uma função capaz de substituir todos os números negativos de uma matriz por seu módulo.

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

void modulomatriz(int k, int a[k][k]){
    int i, j;
    for (i=0; i<k; i++){
        for (j=0; j<k; j++){
            if (a[i][j] < 0){
                a[i][j] = a[i][j] * (-1);
            }
        }
    }
}


int main () 
{
    int i, j, k;

    printf("Digite a dimensao da matriz quadrada: ");
    scanf("%d", &k);

    int a[k][k];

    for (i=0; i<k; i++)
    {
        printf("Digite os valores para a %d linha: ", i+1);
        for (j=0; j<k; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("A matriz original digitada:\n");
    mostramatriz(k, a);

    printf("A matriz em modulo:\n");
    modulomatriz(k, a);
    mostramatriz(k, a);
}