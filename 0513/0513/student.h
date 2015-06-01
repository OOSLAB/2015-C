#pragma once
#include <stdio.h>
#define UNDEFINED -1

struct Student {
	// fields
	int id;
	char name[10];
};

int readStudent(struct Student *element, FILE *fp) {
	int noFields;
	noFields = fscanf_s(fp, "%d %s", &(element->id), element->name); 
	return noFields;
}

int writeStudent(struct Student *element, FILE *fp) {
	fprintf(fp, "학번:%d 이름:%s\n", element->id, element->name);
	return 0;
}

/*
void computeElementAverage(struct Student *element) {
	element->average = (float)(element->kor + element->math) / 2.0;
}

void setElementGrade(struct Student *element) {
	if (element->average > 100)
		element->grade = 'x';
	else if (element->average >= 90)
		element->grade = 'a';
	else if (element->average >= 80)
		element->grade = 'b';
	else if (element->average >= 70)
		element->grade = 'c';
	else if (element->average >= 60)
		element->grade = 'd';
	else if (element->average >= 0)
		element->grade = 'f';
	else
		element->grade = 'y';
}
*/
