#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[] = "jeff";

	char *arr = malloc(4 * sizeof(*arr));
	*arr = 'y';
	*(arr + 1) = 'e';
	*(arr + 2) = 's';
	*(arr + 3) = '\0';
	printf("%s\n", arr);

	int w = 0;
	while(w < strlen(arr)) {
		printf("index[%d] = %c, address %p\n", w, *(arr + w), arr + w);
		w++;
	}

	for(int i = 0; i < strlen(str); i++)
		printf("index[%d] = %c, address %p\n", i, *(str + i), str + i);

	free(arr);
	return 0;

}
