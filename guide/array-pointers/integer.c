#include <stdio.h>

int main() {

	int value = -2; // signed decimal 
	int x = 3; // also a signed decimal 
	unsigned valueTwo = 9; // unsigned decimal

	printf("signed value: %d\n", value);
	printf("unsigned value: %u\n", valueTwo); // format specifier for unsigned values


	const int N = 82; // const = no change after initialized
	printf("Decimal: %d\n", N); // format specifier for decimal values
	printf("Hexadecimal: %x\n", N); // format specifier for hexadecimal values
	printf("Octal: %o\n", N); // format specifier for octal values




	return 0;


}
