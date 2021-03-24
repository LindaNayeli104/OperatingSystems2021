#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

// 0 = stdin
// 1 = stdout
int main(){
	char line;
	int counter=0;
	while(read(0, &line, 1)){
		if(line == '\n'){
			counter += 1;
		}
	}
	if(line != '\n'){
		counter += 1;
	}
	printf("%d\n", counter);
	return 0;
}

//Mi programa no cuenta lineas vacias