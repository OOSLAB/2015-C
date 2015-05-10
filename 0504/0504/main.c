#include <stdio.h>
#include "studentArray.h"
#include "sugang.h"
// Macro를 이용한 상수 정의
#define SIZE 6

void main()
{
	/*
	struct StudentArray studentArray;
	studentArray.maxLength = SIZE;
	studentArray.length = 0;
	int result;


	// 입력
	result = readStudentArray(&studentArray, "student.txt");
	// 출력
	result = writeStudentArray(&studentArray, "studentOut.txt");
	*/

	FILE *fp;
	struct Sugang sugang;
	int result;
	// 입력
	errno_t errNo = fopen_s(&fp, "sugang.txt", "r");
	result = readSugang(&sugang, fp);

	// 출력
	errNo = fopen_s(&fp, "sugangOut.txt", "w+");
	result = writeSugang(&sugang, fp);

}