#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int idade;
    float altura;    
}PESSOA;

void imprimeVetor(PESSOA povo[10], int i)
{
    for(int j = 0; j < i; j++)
    {
        printf("\nNome: %s", povo[j].nome);
        printf("\nidade: %d", povo[j].idade);
        printf("\naltura: %.2f\n", povo[j].altura);
    }
}

PESSOA leDadosUmaPessoa(FILE *Arq)
{
    PESSOA i;
    
    fscanf(Arq, "%s\n", &i.nome);
    fscanf(Arq, "%d\n", &i.idade);
    fscanf(Arq, "%f\n", &i.altura);
    return i;
}

void fechaArquivo(FILE *Arq)
{
    fclose(Arq);
}

int compar (const void * p1, const void *p2)
{
    if ((*(PESSOA*)p1).altura == ((*(PESSOA*)p2).altura))
        return 0; //iguais
    else
        if ((*(PESSOA*)p1).altura < ((*(PESSOA*)p2).altura))
            return -1; // p1 vem antes
        else
            return 1; // p1 vem depois
}

void ordenaVetor(PESSOA *Povo, int i)
{
    qsort(Povo, i, sizeof(PESSOA), compar);
}

FILE *Arq;
FILE *abreArquivoAEntrada(char S1[50])
{
    FILE *Arq = fopen(S1, "rt");
    return Arq;
}

int main()
{
    char S1[50] = "exelab.txt";
    FILE *Arq = abreArquivoAEntrada(S1);
    PESSOA Povo[10], P;
    int i = 0;
    //leNomeArquivoEntrada(S1);

    if (abreArquivoAEntrada(S1) != NULL)
    {
        while (!feof(Arq))
        {
            P = leDadosUmaPessoa(Arq);
            Povo[i] = P;
            i++;
        }
        fechaArquivo(Arq);
        printf("Arquivo criado com sucesso! \n");
        ordenaVetor(Povo, i);
        imprimeVetor(Povo, i);
    }

    else printf("Erro na abertura do arquivo");
    return 0;

}
