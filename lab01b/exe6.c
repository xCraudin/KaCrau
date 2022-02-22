#include<stdio.h>
#include<stdlib.h>

// Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de teclado.

int main () 
{
    int k, i, j;

    printf("Digite a dimensao da matriz quadrada: ");
    scanf("%d", &k);

    int a[k][k];

    
    for (i=0; i<k; i++)
    {
        printf("Digite os valores para a %d linha: ", i+1);
        for (j=0; j<k; j++)
            scanf("%d", &a[i][j]);
    }
    printf("A matriz digitada:\n");
    for (i=0; i<k; i++)
    {
        for (j=0; j<k; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //Transposta()
    printf("A matriz transposta seria:\n");
    for (i=0; i<k; i++)
    {
        for (j=0; j<k; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

