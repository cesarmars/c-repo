#include <stdio.h>

int main(int argc, char *argv[]) {

	printf("Number of argc strings: %d\n", argc); // number of strings on the command line

	for(int i = 0 ; i <= argc; i++) {
		// argv is a pointer variable that points to each element in the array of strings
		// array -> ./a.out Hello -> ["./a.out","Hello", null], NULL tells us when the arrays is finished
		printf("Argc number %d: %s\n", i, argv[i]);  
	}	
	return 0;

}
