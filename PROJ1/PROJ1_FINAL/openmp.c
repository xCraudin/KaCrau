#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

long int T = 1000000000;

void Taylor(double* global_result_p);

int main(int argc, char *argv[])
{
  double global_result = 0.0;
  int thread_count;

  thread_count = strtol(argv[1], NULL, 10);
  # pragma omp parallel num_threads (thread_count)
  Taylor(&global_result);

  printf("Resultado: %f\n", global_result);
	
  return 0;
};

void Taylor(double* global_result_p)
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

  # pragma omp critical
  *global_result_p += sum;

  printf("Thread %ld => Resultado: %.4f\n", my_rank, sum);

}