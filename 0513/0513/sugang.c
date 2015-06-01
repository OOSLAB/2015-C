#include <stdio.h>
#include "sugang.h"

int readSugang(struct Sugang *element, FILE *fp) {
	int noFields;
	noFields = fscanf_s(fp, "%d %d %s %d %d %s",
		&(element->year),
		&(element->hakki),
		element->gangjwaName, sizeof(element->gangjwaName),
		&(element->studentID),
		&(element->score),
		element->grade, sizeof(element->grade));

	return noFields;
}

int writeSugang(struct Sugang *element, FILE *fp) {
	fprintf(fp, "�⵵:%d �б�:%d ���¸�:%s �л�:%d ����:%d(%s)\n",
		element->year, element->hakki, element->gangjwaName,
		element->studentID, element->score, element->grade);
}