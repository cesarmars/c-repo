#include <stdio.h>
void increment(int **ptr_increment) {
	*ptr_increment += 1;
}

int main() {
	int x[] = {10, 20, 30};
	int *ptr = x;
	increment(&ptr);
	printf("%d and %p\n", *ptr, ptr);
	return 0;

}
