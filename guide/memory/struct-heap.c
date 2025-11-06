#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int id;
	char *name;
	char *email;
}Student;

Student *make_student(int id, char *name,  char *email) {
	Student *one = malloc(sizeof(Student));
	one->id = id;
	one->name = name;
	one->email = email;
	return one;
}

int main() {
	Student *student = make_student(303, "jeff", "jeff@berkeley.edu");
	printf("Id is %d, name is %s, and email is %s\n", student->id, student->name, student->email);
	return 0;
}
