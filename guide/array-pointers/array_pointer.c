#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

int main() {
	 /* 
	  * First example, array indexing to obtain values and memory from the array, manual indexing, somewhat efficient 
	  */
	int nums[] = {20,30,40} ; 
	printf("First value of the nums array at index 0 is %d and its address %p\n", nums[0], &nums[0]);
	printf("Second letter of the string at index 1 %c and its address %p\n", nums[1], &nums[1]);
	// etc ..
	printf("the size of the array is %lu bytes and the length of the int array is %d\n", 
			sizeof(nums), sizeof(nums)/sizeof(nums[0]));

	/*
	 * A second way is using pointer arithmetic, where you use the array variable 
	 * effiecient as manual indexing .
	 */
	int arr[3];
	*(arr + 0) = 1;
	*(arr + 1) = 2;
	*(arr + 2) = 3;
	printf("Pointer to the first element %d and the address %p\n", *arr, arr);
	printf("Pointer to the second element %d and the address %p\n", *(arr + 1), arr + 1);
	// etc...
	printf("the length of the int array is %lu and the size of the int array is %lu bytes\n", sizeof(arr)/sizeof(*arr), sizeof(arr));

	return 0;

}
