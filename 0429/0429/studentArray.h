#pragma once
#include "student.h"

#define SIZE 6
struct StudentArray {
	struct Student elm[SIZE];
	int maxLength;
	int length;
};

int readStudentArray(struct StudentArray *sArray, char *fileName) {
	FILE *fp;
	int i, noFields = 0;
	errno_t errNo = fopen_s(&fp, fileName, "r");
	// file open error
	if (errNo != 0) return -1;

	for (i = 0; noFields!= EOF; i++) {
		// array overflow array
		if (i > sArray->maxLength) {
			return -2;
		}
		noFields = readStudent(&(sArray->elm[i]), fp);
	}
	fclose(fp);
	sArray->length = i - 1;
	return sArray->length;
}

int writeStudentArray(struct StudentArray *sArray, char *fileName) {
	FILE *fp;
	int i;
	errno_t errNo = fopen_s(&fp, fileName, "w+");
	// file open error
	if (errNo != 0) return -1;

	for (i = 0; i < sArray->length; i++) {
		// 성적 입력: 키보드
		writeStudent(&(sArray->elm[i]), fp);
	}
	fclose(fp);
}

/*
void computeAverage(struct StudentArray *sArray) {
	int i;
	for (i = 0; i < sArray->length; i++) {
		computeElementAverage(&(sArray->elm[i]));
	}
}

// array에 입력된 성적을 grade에 등급으로로 변환하여 저장
void setGrade(struct StudentArray *sArray) {
	int i;
	for (i = 0; i<sArray->length; i++) {
		setElementGrade(&(sArray->elm[i]));
	}
}

int searchFirstIndex(struct StudentArray *sArray) {
	int iMax, i;
	// iMax가 끝까지 length값이면 모두다 계산 된 상태임
	iMax = sArray->length;
	// 첫번째 UNDEFINED 된 index 찾기
	for (i = 0; i < sArray->length; i++) {
		if (sArray->elm[i].rank == UNDEFINED) {
			iMax = i;
			break;
		}
	}
}
int findMax(struct StudentArray *sArray) {
	int i, iMax = 0;

	iMax = searchFirstIndex(sArray);
	for (i = iMax + 1; i < sArray->length; i++) {
		if (sArray->elm[i].rank == UNDEFINED) {
			if (sArray->elm[i].average > sArray->elm[iMax].average) {
				iMax = i;
			}
		}
	}
	return iMax;
}

void computeRank(struct StudentArray *sArray) {
	int i, maxIndex;
	for (i = 0; i < sArray->length; i++) {
		sArray->elm[i].rank = UNDEFINED;
	}
	for (i = 0; i < sArray->length; i++) {
		maxIndex = findMax(sArray);
		sArray->elm[maxIndex].rank = i;
	}
}
*/