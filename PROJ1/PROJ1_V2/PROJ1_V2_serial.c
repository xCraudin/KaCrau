#include <stdio.h>

int main(void)
{
  double sum = 0;
	long int T = 10000000000;
	
  for (long int i = 1; i <= T; i++)
  {
    sum += 1/(double)i;
  }

  printf("Resultado: %.3f\n", sum);

  return 0;
}