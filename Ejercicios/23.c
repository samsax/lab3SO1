#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <wait.h>

int main(void){
	
	pid_t pid_h;
	pid_t pid_n;
	pid_h = fork();
	
	if(pid_h == 0){
		
		pid_n = fork();
		if(pid_n == 0){	
			printf("!\n");
			
		}else{
			
			printf("Mundo");
		
		}
	}else{
		printf("Hola ");

								
	} 	
	return(0);
}
