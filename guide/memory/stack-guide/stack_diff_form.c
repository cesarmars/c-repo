#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* function declaration */
void a(int x);
void b(int y);
void c(int z);
void d(int w);

int main() {
	a(0);
	return 0;
}

void a(int x) {
	b(1);
}

void b(int y) {
	c(2);
}

void c(int z) {
	d(3);
}

void d(int w) {
	printf("done with function calls, last-out and first-out is d() \n");
}


/*
   last-in, first-out (lifo) diagram

   allocation order (function calls)
   main() stack frame
   a() stack frame
   b() stack frame
   c() stack frame
   d() stack frame <- last-in

   deallocation order (return) 
   d() freed <- first-out
   c() freed
   b() freed
   a() freed
   main() freed

*/



