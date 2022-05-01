#include <stdio.h>

// Considere o algoritmo proposto para o projeto final da disciplina, que envolve a soma infinitesimal para solução de ln(T) em séries de Taylor

int main(void) {
  int T = 10;
  float sum = 0;
	
  for (float i = 1; i <= T; i++)
	{
    sum += (1/i);
  }

	printf("A solução da Série de Taylor para Ln(10)\n");
	printf("Ln(%d) = %.3f\n", T, sum);
  return 0;
}