#include <stdio.h>
#include <stdlib.h>

void a();
void b();
void c();

void a() {
	int x = 3;
	printf("address of x: %p\n", &x);
	b();
}

void b() {
	int y = 200;
	printf("address of y: %p\n", &y);
	c();
}

void c() {
	int z = 1;
	printf("address of z: %p\n", &z);
}

int main() {
	int i = 10;
	printf("address of i: %p\n", &i);
	a();
	return 0;
}
