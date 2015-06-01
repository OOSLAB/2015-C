#pragma once

struct Sugang {
	int year;
	int hakki;
	char gangjwaName[10];
	int studentID;
	int score;
	char grade[4];
};

int readSugang(struct Sugang *element, FILE *fp);
int writeSugang(struct Sugang *element, FILE *fp);