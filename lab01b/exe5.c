#include<stdio.h>
#include<stdlib.h>

// Crie um programa  capaz de multiplicar uma linha de uma matriz de inteiros por um dado número. 
// Faça o mesmo para uma coluna. A matriz deve ser lida de teclado.

int main () 
{
    int k, i, j, e, o, mult, rd=1;
    
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
    printf("A matriz digitada:\n");
    for (i=0; i<k; i++)
    {
        for (j=0; j<k; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //Multiplicação
    while (rd == 1)
    {
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
            break;
        }
        

        printf("\nA matriz final ficou:\n");
        for (i=0; i<k; i++)
        {
            for (j=0; j<k; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("\nDeseja continuar? Sim(1) Nao(0): ");
        scanf("%d", &rd);
    }
}