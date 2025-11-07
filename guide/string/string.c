#include <stdio.h>
#include <string.h>

int main() {
	/* string array(array indexing) */
	char str[] = "hello";
	/* string array: printing the individual chars and addresses*/
	printf("first character of the array is %c and its address is %p\n", str[0], &str[0]);
	printf("last character of the array is %d (null terminator) and its address is %p\n", str[5], &str[5]);
	/* size of the char array and length*/
	printf("size of the array is %lu bytes\n", sizeof(str));
	printf("length of the array using strlen operator is %lu (excludes the null terminator)\n", strlen(str));
	printf("true length of the array is %lu (including the null terminator)\n", sizeof(str)/sizeof(str[0]));
	/* iterating through the char array of the string "hello" */
	for(int i = 0; i < strlen(str); i++)
		printf("index[%d] = %d, %p\n", i, str[i], &str[i]);

	/* string array(pointer arithemetic) */
	char world_str[6];


	return 0;
	
}
