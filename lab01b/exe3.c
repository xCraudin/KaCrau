#include<stdio.h>
#include<stdlib.h>

// Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). 
// Este número deve ser sempre ímpar.

int main(void) 
{

    int num, i, j;

    printf("Digite o numero maximo: ");
    printf("\n");
    printf("*O numero deve ser impar*\n");
    scanf("%d", &num);
    
    if (num % 2 ==0)
    {
       printf("Entrada invalida!.\n");
       return 1;
    }
    else
    {
        for( i = 0; i<= (num / 2) + 1; i++)
        {
            for ( j = i + 1; j <= num - i; j++ )
            {
                printf("%d ",j);
            }

            printf("\n");

            for ( j = 0; j < (i + 1) * 2; j++ )
                printf(" ");
        }
    }
    return 0;
}