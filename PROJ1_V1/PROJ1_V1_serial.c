#include <stdio.h>
#include <time.h>

int main(void)
{
  clock_t t;
  float sum = 0;
	int T = 100;
	t = clock();
	
  for (float i = 1; i <= T; i++)
  {
    sum += (1/i);
  }

  printf("Resultado: %.2f\n", var);
  
  t = clock() - t;

  printf("Tempo de execução com 2 threads em serial: %lf", ((double)t) / ((CLOCKS_PER_SEC / 1000)));

  return 0;
}