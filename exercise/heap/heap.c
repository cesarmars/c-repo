#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
	const char *brand;
	int year;
	float milage;
};

int main () {
	struct Car *car = malloc(sizeof(*car));
	car->brand = "ford";
	car->year = 2002;
	car->milage = 3.3;

	printf("brand is %s, year is %d, milage is %f\n", car->brand, car->year, car->milage);

	return 0;
}

