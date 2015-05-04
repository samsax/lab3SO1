#include<stdio.h>
#include<unistd.h>
#include <sys/wait.h>
main() {


int pidhijo = 0;
int pidhijodehijo = -1;
wait(NULL);
if( pidhijo > 0 && pidhijodehijo == -1){
	
	printf("Mundo");
	
	pidhijodehijo = fork();
	wait(NULL);
}
else if(pidhijo == 0)
{
		printf("Hola ");
		pidhijo = fork();
	}
else if( pidhijodehijo != -1 ){
	printf("!");
	}
}

