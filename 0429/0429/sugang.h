#pragma once
#include <stdio.h>

struct Sugang {
	int year;
	int hakki;
	char *gangjwaName;
	int score;
	char grade[2];
	int studentID;
};

int readSugang(struct Sugang *element, FILE *fp) {
	int noFields;
	noFields = fscanf_s(fp, "%d %d %s %d %d", 
		&(element->year), &(element->hakki), &(element->gangjwaName), &(element->score), &(element->studentID));
	return noFields;
}

int writeSugang(struct Sugang *element, FILE *fp) {
	fprintf(fp, "년도:%d 학기:%d 강좌명:%s 성적:%d 학생:%d\n", 
		element->year, element->hakki, element->gangjwaName, element->score, element->studentID);
}