#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void c() {
	/* variable (z) type integer (int8_t) is a local variable stored in c()'s stack frame */
	int8_t z = 55;
	printf("%p\n", &z);

    /* When c() returns, c()'s stack frame will be popped (freed) */
	printf("done, last-in and first-out is c()\n");
}

void b() {
	/* variable (y) type integer (int8_t) is a local variabel stored in b()'s stack frame */
	int8_t y = 28;
	printf("%p\n", &y);

    /* calling c() pushes a new stack frame on top of b() */
	c();

    /* when b() returns, b()'s stack frame will be popped (freed) */
}

void a() {
	/* variable (x) type integer (int8_t) is a local variable stored in a()'s stack frame */
	int8_t x = 10;
	printf("%p\n", &x);

    /* calling b() pushes a new stack frame on top of a(), allocates memory for that function */
	b();

    /* when a() returns, a()'s stack frame will be popped (freed) */
}

int main() {
	/* variable (value) type integer (int8_t) is a local variable stored in main()'s stack frame */
	int8_t value = 2;
	printf("%p\n", &value);

	/* calling a() pushes a()'s stack frame on top of main(), allocates memory for that function */
	a();	

	/* when main() returns, the program ends and its frame is freed, aka deallocation */
	return 0;
}

/*
   last-in, first-out diagram

   allocation order (function call) 
   main() stack frame
   a() stack frame
   b() stack frame
   c() stack frame <- last-in because no more function call

   deallacation order (return)
   c() freed <- first-out because it is where the function call ended
   b() freed
   a() freed
   main() freed

*/

