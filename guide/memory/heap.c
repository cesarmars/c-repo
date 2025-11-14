#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	/* creates space for the word "hello" */
	int cap = 6;
	char *str = malloc(cap * sizeof(*str)); // or malloc(6 * sizeof(char));
	*str = 'h';
	*(str + 1) = 'e';
	*(str + 2) = 'l';
	*(str + 3) = 'l';
	*(str + 4) = 'o';
	*(str + 5) = '\0';
	
	/* gets the number of char's of the word "hello" before the null terminator, should be 5, strlen is a runtime function*/
	int len = strlen(str);
	printf("strlen: %d\n", len);

	/* true number of char's in the word "hello" is 6 includes the null terminator */
	int t_len = cap;   

	/* prints the string from the heap */
	printf("%s\n", str);

	/* sizeof str should be a pointer size because malloc returns a pointer */
	printf("sizeof(str): %zu bytes\n", sizeof(str));

	/* print each elements address, grows upwards */	
	for(int i = 0; i < t_len; i ++)
		printf("%p\n", str + i);
		
	free(str);
	return 0;
	

}
