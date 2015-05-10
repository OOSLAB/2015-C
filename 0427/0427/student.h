#pragma once
#include <stdio.h>
#define UNDEFINED -1

struct Student {
	// fields
	char *name;
	int kor;
	int math;
	float average;
	char grade;
	int rank;
};

int readElement(struct Student *element, FILE *fp) {
	int noFields;
	noFields = fscanf_s(fp, "%d %d", &(element->kor), &(element->math)); 
	return noFields;
}

int writeElement(struct Student *element, FILE *fp) {
	fprintf(fp, "%fÁ¡ %dµî\n", element->average, element->rank+1);

}
