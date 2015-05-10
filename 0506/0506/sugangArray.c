#include <stdio.h>
#include "sugangArray.h"

//struct SugangArray sArray;

int readSugangArray(struct SugangArray *sArray, char *fileName) {
	FILE *fp;
	int i, noFields = 0;
	errno_t errNo = fopen_s(&fp, fileName, "r");
	// file open error
	if (errNo != 0) return -1;

	for (i = 0; noFields != EOF; i++) {
		// array overflow array
		if (i > sArray->maxLength) {
			return -2;
		}
		noFields = readSugang(&(sArray->elm[i]), fp);
	}
	fclose(fp);
	sArray->length = i - 1;
	return sArray->length;
}

int writeSugangArray(struct SugangArray *sArray, char *fileName) {
	FILE *fp;
	int i;
	errno_t errNo = fopen_s(&fp, fileName, "w+");
	// file open error
	if (errNo != 0) return -1;

	for (i = 0; i < sArray->length; i++) {
		// 성적 입력: 키보드
		writeSugang(&(sArray->elm[i]), fp);
	}
	fclose(fp);
	return i;
}