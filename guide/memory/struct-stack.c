#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Class {
	char course[100];
	char id[100];
	char prof[100];
};

struct Class make_course(const char *course, const char *id, const char *prof) {
	struct Class one;
	strcpy(one.course, course);
	strcpy(one.id, id);
	strcpy(one.prof, prof);
	return one;
}

int main() {
	struct Class cs61c = make_course("Computer Science", "61c", "Dan Garcia");
	printf("Course is %s %s taught by %s\n", cs61c.course, cs61c.id, cs61c.prof);

	printf("sizeof struct Class: %lu bytes\n", sizeof(cs61c));

	return 0;
}
