#include <stdio.h>

void ptr(int *arr) {
	printf("%p\n", arr);
	char letter[] = "hello";
	printf("%p\n", letter);
}

int main() {
	int arr[] = {1,2,3};
	ptr(arr);
	return 0;
}
