#include <stdio.h>
#include <stdlib.h>

void c() {
	int8_t z = 55;
	printf("%p\n", &z);
}

void b() {
	int8_t y = 28;
	printf("%p\n", &y);
	c();
}

void a() {
	int8_t x = 10;
	printf("%p\n", &x);
	b();
}

int main() {
	int8_t value = 2;
	printf("%p\n", &value);
	a();	
	return 0;
}
