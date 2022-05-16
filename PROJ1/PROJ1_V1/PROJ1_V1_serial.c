#include <stdio.h>

int main(void)
{
  float sum = 0;
	int T = 100;
	
  for (float i = 1; i <= T; i++)
  {
    sum += (1/i);
  }

  printf("Resultado: %.2f\n", sum);
  
  return 0;
}