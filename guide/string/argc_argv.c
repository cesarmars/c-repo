#include <stdio.h>

int main(int num, char *letter[]) {

	printf("Number of argc strings: %d\n", num); // number of strings on the command line

	for(int i = 0 ; i <= num; i++) {
		// argv is a pointer variable that points to each element in the array of strings
		// array -> ./a.out Hello -> ["./a.out","Hello", null], NULL tells us when the arrays is finished
		printf("Argc number %d: %s\n", i, letter[i]);  
	}	
	return 0;

}
