#include <stdio.h>

typedef struct {
	int x;
	int y;
}Coord;

int main() {
	/* Method 1: Dot notation */
	Coord coord1, coord2;
	coord1.x = 30;
	coord1.y = 40;
	printf("coord1: x is %d and y is %d\n", coord1.x, coord1.y);

	coord2.x = 50;
	coord2.y = 60;
	printf("coord2: x is %d and y is %d\n", coord2.x, coord2.y);
	
	/* Method 2: Pointer notation */
	Coord *ptr1, *ptr2;
	ptr1->x = 10;
	ptr1->y = 20;
	printf("ptr1: x is %d and y is %d\n", ptr1->x, ptr1->y);

	ptr2->x = 30;
	ptr2->y = 40;
	printf("ptr2: x is %d and y is %d\n", ptr2->x, ptr2->y);

	return 0;

	

}
