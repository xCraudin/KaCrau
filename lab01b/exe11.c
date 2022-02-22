#include <stdio.h>
#include <stdlib.h>

// Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz. 
// O resultado deve ser colocado na linha L2. 
// Faça o mesmo com a multiplicação.

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
    printf("\n");
}


void somadelinhas(int k, int a[k][k]){
    for (int i = 0; i < k; i++){
        a[1][i] = a[0][i] + a[1][i];
    }
}

void multlinhas(int k, int a[k][k]){
    for (int i = 0; i < k; i++){
        a[1][i] = a[0][i] * a[1][i];
    }
}

int main(){
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
    printf("\n");


    printf("A matriz original:\n");
    mostramatriz(k, a);

    printf("As somas das linhas ficam:\n");
    somadelinhas(k, a);
    mostramatriz(k, a);

    printf("As multiplicacoes das linhas ficam:\n");
    multlinhas(k, a);
    mostramatriz(k, a);
}
