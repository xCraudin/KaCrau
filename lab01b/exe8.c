#include <stdio.h>
#include <stdlib.h>

// Crie uma função capaz de criar a transposta de uma matriz.

void mostramatriz(int k, int a[k][k]){
    int i,j;
    for (i=0; i<k; i++)
    {
        for (j=0; j<k; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void transposta(int k, int a[k][k], int at[k][k]){
    int i,j;
    for (i=0; i<k; i++)
    {
        for (j=0; j<k; j++)
        {
            at[i][j] = a[j][i];
        }
    }
}

int main () 
{
    int i, j, k;

    printf("Digite a dimensao da matriz quadrada: ");
    scanf("%d", &k);

    int a[k][k];
    int at[k][k];

    for (i=0; i<k; i++)
    {
        printf("Digite os valores para a %d linha: ", i+1);
        for (j=0; j<k; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    transposta(k, a, at);

    printf("A matriz original digitada:\n");
    mostramatriz(k, a);
   
    printf("A matriz transposta digitada:\n");
    mostramatriz(k, at);
}

