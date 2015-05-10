#pragma once
#include "student.h"

#define SIZE 6
struct StudentArray {
	struct Student elm[SIZE];
	int maxLength;
	int length;
};

void readScore(struct StudentArray *sArray) {
	FILE *fp;
	int i, noFields = 0;
	char c;
	errno_t errNo = fopen_s(&fp, "score.txt", "r");
	if (errNo != 0) return -1;

	for (i = 0; noFields != EOF; i++) {
		// ���� �Է�: file
		if (i > sArray->maxLength) {
			printf("Student Array Overflow\n");
			exit(-1);
		}
		noFields = fscanf_s(fp, "%d %d", &(sArray->elm[i].kor), &(sArray->elm[i].math)); // <- type
		//		result = readInt(fp, &(sArray.elm[i].kor);
	}
	fclose(fp);
	sArray->length = i - 1;
}

void printScore(struct StudentArray sArray) {
	FILE *fp;
	int i;
	fopen_s(&fp, "scoreOut.txt", "w+");
	for (i = 0; i < sArray.length; i++) {
		// ���� �Է�: Ű����
		fprintf(fp, "%d: %f�� %d��\n", i, sArray.elm[i].average, sArray.elm[i].rank + 1); // <- type

	}
	fclose(fp);
}

void computeAverage(struct StudentArray sArray) {
	int i;
	for (i = 0; i < sArray.length; i++) {
		sArray.elm[i].average = (sArray.elm[i].kor + sArray.elm[i].math) / 2.0;
	}
}

// array�� �Էµ� ������ grade�� ������η� ��ȯ�Ͽ� ����
void setGrade(struct StudentArray sArray) {
	int i;
	for (i = 0; i<sArray.length; i++) {
		if (sArray.elm[i].average>100)
			sArray.elm[i].grade = 'x';
		else if (sArray.elm[i].average >= 90)
			sArray.elm[i].grade = 'a';
		else if (sArray.elm[i].average >= 80)
			sArray.elm[i].grade = 'b';
		else if (sArray.elm[i].average >= 70)
			sArray.elm[i].grade = 'c';
		else if (sArray.elm[i].average >= 60)
			sArray.elm[i].grade = 'd';
		else if (sArray.elm[i].average >= 0)
			sArray.elm[i].grade = 'f';
		else
			sArray.elm[i].grade = 'y';
	}
}

int searchFirstIndex(struct StudentArray sArray) {
	int iMax, i;
	// iMax�� ������ length���̸� ��δ� ��� �� ������
	iMax = sArray.length;
	// ù��° UNDEFINED �� index ã��
	for (i = 0; i < sArray.length; i++) {
		if (sArray.elm[i].rank == UNDEFINED) {
			iMax = i;
			break;
		}
	}
}
int findMax(struct StudentArray sArray) {
	int i, iMax = 0;

	iMax = searchFirstIndex(sArray);
	for (i = iMax + 1; i < sArray.length; i++) {
		if (sArray.elm[i].rank == UNDEFINED) {
			if (sArray.elm[i].average > sArray.elm[iMax].average) {
				iMax = i;
			}
		}
	}
	return iMax;
}

void computeRank(struct StudentArray sArray) {
	int i, maxIndex;
	for (i = 0; i < sArray.length; i++) {
		sArray.elm[i].rank = UNDEFINED;
	}
	for (i = 0; i < sArray.length; i++) {
		maxIndex = findMax(sArray);
		sArray.elm[maxIndex].rank = i;
	}
}
