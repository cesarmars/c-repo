#include <stdio.h>

void update(int *a, int *b) {
	*a += 1;
	*b += 2;
}

int main() {
	int x = 3, y = 4;
	update(&x, &y);
	printf("x was 3, now is %d. y was 4, now is %d\n", x, y);
	return 0;
}
