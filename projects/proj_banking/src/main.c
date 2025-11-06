#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct {
	int age;
	char name[80];
	double balance;
	long savings;
}Information;

Information makeClient(int a, const char arr[80], double b, long s) {
	Information user;
	user.age = a;
	strcpy(user.name, arr);
	user.balance = b;
	user.savings = s;
	return user;
}

void displayClient(Information holder) {
	printf("Client one: %d, %s, %f, %ld\n", holder.age, holder.name, holder.balance, holder.savings);
}

int main() {
	Information one = makeClient(20, "Jared", 200.0, 5000); 
	displayClient(one);
	return 0;
	



}
