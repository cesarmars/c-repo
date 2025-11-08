#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *sayHi() {
	char *str = malloc(6 * sizeof(char));
	strcpy(str, "hello");
	return str;
}

int *changeValue(int a) {
	int *ptr = malloc(sizeof(*ptr));
	ptr = &a;
	*ptr += 20;
	return ptr;
}

int main() {
	char *x = sayHi();
	printf("word is %s\n", x);
	for(int i = 0; i < strlen(x); i++)
		printf("index[%d] = %c\n", i, *(x + i));
	
	int b = 10;
	int *y = changeValue(b);
	printf("new value is %d\n", *y);

	return 0;
}
