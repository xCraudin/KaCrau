#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/wait.h>

int main(){
	// O processo pai e o processo filho compartilhem uma variável simples (por exemplo, inteiro - valor 1)

	pid_t childpid;
	int shm_id; 
	// shmget() cria uma área de memória compartilhada de tamanho size.
	shm_id = shmget(IPC_PRIVATE, 1024, IPC_CREAT|0660);
	if (shm_id < 0){
		printf("shmget error\n");
	}
	
	// shmat() liga a um segmento de memória existente referenciado pelo identificador shm_id
	int *shrd = (int*)shmat(shm_id, NULL, 0);
	*shrd = 1;

	printf("O valor inicial da variavel compartilhada >>> %i\n",*shrd);
	childpid = fork();
	printf("O childpid >>> %i\n",childpid);
	
	if (childpid == 0){     
		*shrd+= 2;  

		printf("{Filho} O valor da variavel compartilhada [Adição +2] >>> %i\n",*shrd);    
	}
	else{
		wait(NULL);     
		*shrd *= 4 ;

		printf("{Pai} O valor da variavel compartilhada [Produto *4] >>> %i\n",*shrd);    

	}

	
	return 0;
}