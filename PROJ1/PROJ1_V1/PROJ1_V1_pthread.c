#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int thread_count;

void *Taylor(void* rank); /* Thread function */

int T = 100;
double sum = 0.0;

int main(int argc, char* argv[])
{
	long thread;
  pthread_t* thread_handles;

	thread_count = strtol(argv[1], NULL, 10);
	thread_handles = malloc(thread_count*sizeof(pthread_t));

	for(thread = 0; thread < thread_count; thread++)
	{
  	pthread_create(&thread_handles[thread], NULL, Taylor, (void*) thread);
  }

	printf("Hello from the main thread\n");

	for (thread = 0; thread < thread_count; thread++)
	{
		pthread_join(thread_handles[thread], NULL);		
	}

	printf("ln(%d) = %.3f\n", T, sum);
	free(thread_handles);
	
  return 0;
 }

void *Taylor(void* rank)
{
	long my_rank = (long) rank;
  int thread_partition = (T/thread_count);
  int vector = (my_rank*thread_partition) + 1;
	int endVector = (vector+thread_partition);
	
  for (double i = vector; i < endVector; i++)
  {
    sum += 1/i;
  }
	
  printf("\n Hello from thread %ld of %d => sum of taylor series = ", my_rank, thread_count);

  return NULL;
}
