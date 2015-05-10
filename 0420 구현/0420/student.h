#pragma once
#include <stdio.h>
#include "studentArray.h"
#define UNDEFINED -1

// end of file
// == 같다
// != 틀리다
// =  대입
// for( 초기화; 조건; 조건을 끝내기 위한 식?)
// while ( 조건 )
// <= 
// >=

int readScore(struct StudentArray *studentArray) {
	FILE *fp;
	errno_t errNo = fopen_s(&fp, "score.txt", "r");
	if (errNo != 0) return -1;

	while (studentArray->length < studentArray->maxLength)
	{
		//if (studentArray->length >= studentArray->maxLength) {
		//	printf("Student Array Overflow\n");
		//	exit(-1);
		//}
		studentArray->student[studentArray->length].kor = readInt(fp);
		studentArray->student[studentArray->length].math = readInt(fp);
		studentArray->length += 1;
	}
	fclose(fp);
	return studentArray->length;
}

void printScore(struct StudentArray *studentArray) {
	FILE *fp;
	int i;
	fopen_s(&fp, "scoreOut.txt", "w+");
	for (i = 0; i < studentArray->length; i++) {
		// 성적 입력: 키보드
		fprintf(fp, "%d: %f점 %d등\n", i, studentArray->student[i].average, studentArray->student[i].rank + 1); // <- type
	}
	fclose(fp);
}

void computeAverage(struct StudentArray *studentArray) {
	int i;
	for (i = 0; i < studentArray->length; i++) {
		studentArray->student[i].average = (studentArray->student[i].kor + studentArray->student[i].math) / 2.0;
	}
}

// array에 입력된 성적을 grade에 등급으로로 변환하여 저장
void setGrade(struct StudentArray *studentArray) {
	int i;
	for (i = 0; i<studentArray->length; i++) {
		if (studentArray->student[i].average>100)
			studentArray->student[i].grade = 'x';
		else if (studentArray->student[i].average >= 90)
			studentArray->student[i].grade = 'a';
		else if (studentArray->student[i].average >= 80)
			studentArray->student[i].grade = 'b';
		else if (studentArray->student[i].average >= 70)
			studentArray->student[i].grade = 'c';
		else if (studentArray->student[i].average >= 60)
			studentArray->student[i].grade = 'd';
		else if (studentArray->student[i].average >= 0)
			studentArray->student[i].grade = 'f';
		else
			studentArray->student[i].grade = 'y';
	}
}

int searchFirstIndex(struct StudentArray *studentArray) {
	int iMax, i;
	// iMax가 끝까지 length값이면 모두다 계산 된 상태임
	iMax = studentArray->length;
	// 첫번째 UNDEFINED 된 index 찾기
	for (i = 0; i < studentArray->length; i++) {
		if (studentArray->student[i].rank == UNDEFINED) {
			iMax = i;
			break;
		}
	}
}
int findMax(struct StudentArray *studentArray) {
	int i, iMax=0;

	iMax = searchFirstIndex(studentArray);
	for (i = iMax + 1; i < studentArray->length; i++) {
		if (studentArray->student[i].rank == UNDEFINED) {
			if (studentArray->student[i].average > studentArray->student[iMax].average) {
				iMax = i;
			}
		}
	}
	return iMax;
}

void computeRank(struct StudentArray *studentArray) {
	int i, maxIndex;
	for (i = 0; i < studentArray->length; i++) {
		studentArray->student[i].rank = UNDEFINED;
	}
	for (i = 0; i < studentArray->length; i++) {
		maxIndex = findMax(studentArray);
		studentArray->student[maxIndex].rank = i;
	}
}
int readInt(FILE * fp)
{
	int sum;
	char c = 0;

	sum = 0;
	while (c != EOF) {
		c = getc(fp);
		if (c >= '0' && c <= '9')
		{
			sum = sum * 10;
			sum = sum + c - '0';
		}
		else
		{
			return sum;
		}
	}
}


