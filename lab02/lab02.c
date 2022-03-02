#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
  int i, num, j;
  pid_t  pid;
  printf ("Enter the number: ");
  scanf ("%d", &num);
  j = num;

  for (i=1; j > 1; j = j -1) 
  {
    pid = fork();

    if (pid < 0)
    {
    	perror("Failed to fork");
    	exit(1);
    } 

    else if (pid != 0)
    {
    	pid = wait(NULL);
    	break;
    }

    else{  
    	printf("\nSUN: my id is %d  \n", getpid());
    	printf("PARENT: my parentid is %d \n", getppid()); 
    	i=i*j;
     	if (j == 2)
    		printf("\nThe factorial of %d is %d\n",num,i);
    } 
  }
}
