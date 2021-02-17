#include <stdio.h>

int main(int numarg, char **argv){
	for(int i=0; i<numarg; i++){
		printf("Hello world %s\n", argv[i]);
	}
	return 0;
}
