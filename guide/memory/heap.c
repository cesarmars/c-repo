#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	/* creates space for the word "hello" */
	char *str = malloc(6 * sizeof(*str)); // or malloc(6 * sizeof(char));
	*str = 'h';
	*(str + 1) = 'e';
	*(str + 2) = 'l';
	*(str + 3) = 'l';
	*(str + 4) = 'o';
	*(str + 5) = '\0';
	
	/* gets the length of the word "hello" should be 5, excludes the null terminator strlen is a runtime function*/
	int len = strlen(str);
	printf("strlen: %d\n", len);

	/* true length of the word "hello" should be 6, includes the null terminator */
	int t_len = 6 * sizeof(*str);   
	printf("including null terminator: %d\n", t_len);

	/* prints the string from the heap */
	printf("%s\n", str);

	/* sizeof str should be a pointer size because malloc returns a pointer */
	printf("sizeof(str): %lu bytes\n", sizeof(str));

	/* iterate through the memory of each char of the str array include null terminator, grows upwards*/	
	for(int i = 0; i < t_len; i ++)
		printf("%p\n", str + i);
		
	free(str);
	return 0;

}
