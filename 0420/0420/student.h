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

int readScore(struct StudentArray studentArray) {
	FILE *fp;
	int i, noFields=0;
	char c;
	errno_t errNo = fopen_s(&fp, "score.txt", "r");
	if (errNo != 0) return -1;

	for (i=0;noFields!=EOF;i++) {
		// 성적 입력: file
		if (i > studentArray.length) {
			printf("Student Array Overflow\n");
			exit(-1);
		}
		noFields = fscanf_s(fp, "%d %d", &(s[i].kor), &(s[i].math)); // <- type
//		result = readInt(fp, &(s[i].kor);
	}
	fclose(fp);
	return i-1;
}

void printScore(struct StudentArray studentArray) {
	FILE *fp;
	int i;
	fopen_s(&fp, "scoreOut.txt", "w+");
	for (i = 0; i < studentArray.length; i++) {
		// 성적 입력: 키보드
		fprintf(fp, "%d: %f점 %d등\n", i, s[i].average, s[i].rank + 1); // <- type

	}
	fclose(fp);
}

void computeAverage(struct StudentArray studentArray) {
	int i;
	for (i = 0; i < length; i++) {
		s[i].average = (s[i].kor + s[i].math) / 2.0;
	}
}

// array에 입력된 성적을 grade에 등급으로로 변환하여 저장
void setGrade(struct StudentArray studentArray) {
	int i;
	for (i = 0; i<size; i++) {
		if (s[i].average>100)
			s[i].grade = 'x';
		else if (s[i].average >= 90)
			s[i].grade = 'a';
		else if (s[i].average >= 80)
			s[i].grade = 'b';
		else if (s[i].average >= 70)
			s[i].grade = 'c';
		else if (s[i].average >= 60)
			s[i].grade = 'd';
		else if (s[i].average >= 0)
			s[i].grade = 'f';
		else
			s[i].grade = 'y';
	}
}

int searchFirstIndex(struct StudentArray studentArray) {
	int iMax, i;
	// iMax가 끝까지 length값이면 모두다 계산 된 상태임
	iMax = length;
	// 첫번째 UNDEFINED 된 index 찾기
	for (i = 0; i < length; i++) {
		if (s[i].rank == UNDEFINED) {
			iMax = i;
			break;
		}
	}
}
int findMax(struct StudentArray studentArray) {
	int i, iMax=0;

	iMax = searchFirstIndex(s, length);
	for (i = iMax + 1; i < length; i++) {
		if (s[i].rank == UNDEFINED) {
			if (s[i].average > s[iMax].average) {
				iMax = i;
			}
		}
	}
	return iMax;
}

void computeRank(struct StudentArray studentArray) {
	int i, maxIndex;
	for (i = 0; i < size; i++) {
		s[i].rank = UNDEFINED;
	}
	for (i = 0; i < size; i++) {
		maxIndex = findMax(s, size);
		s[maxIndex].rank = i;
	}
}



