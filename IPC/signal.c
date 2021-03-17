#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include<stdbool.h>

bool breakProcess = false;

void signalHandler(int sig){
	printf("Recibe signal %d\n", sig);
	breakProcess = true;
}

int main(){
	signal(2,signalHandler);
	while(1){
		printf("Trabajando \n");
		sleep(1);
		if(breakProcess){
			break;
		}
	}
	printf("Ya voy a terminar \n");
	return 0;
}