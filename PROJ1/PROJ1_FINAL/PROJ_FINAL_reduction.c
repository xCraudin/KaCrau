#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

long int T = 1000000000;

double Taylor()
{
  long int my_rank = omp_get_thread_num();
  int thread_count = omp_get_num_threads();
	
	int thread_partition = (T/thread_count);
  int vector = (my_rank*thread_partition) + 1;
	int endVector = vector + (thread_partition);
 
  double sum = 0.0;

  for (double i = vector; i < endVector; i++)
  {
    sum += 1 / i;
  }

  printf("Thread %ld => Resultado: %.4f\n", my_rank, sum);

	return sum;
}

int main(int argc, char *argv[])
{
  double global_result_p = 0.0;
  int thread_count;

	long int my_rank = omp_get_thread_num();
	
  thread_count = strtol(argv[1], NULL, 10);
#	pragma omp parallel num_threads(thread_count)\
		reduction(+: global_result_p)
	global_result_p += Taylor();
}

