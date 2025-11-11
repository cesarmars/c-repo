#include <stdio.h>

int strlength(char *ptr) {
	int i = 0;
	int lens = 0;
	while(*(ptr + i) != '\0') {
		i++;
		lens ++;
	}
	return lens;
}

int main() {
	char str[] = "hello";
	printf("length of the strings is %d\n", strlength(str));

	int true_lens = sizeof(str)/sizeof(*str);
	printf("the true length of the string is %d\n", true_lens);
	return 0;

}
