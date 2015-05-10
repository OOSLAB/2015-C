#include <stdio.h>
#include "studentArray.h"
// Macro를 이용한 상수 정의
#define SIZE 6

void main()
{
	struct StudentArray studentArray;
	studentArray.maxLength = SIZE;
	studentArray.length = 0;
	int result;

	// 입력
	result = readStudentArray(&studentArray, "student.txt");
	// 출력
	result = writeStudentArray(&studentArray, "studentOut.txt");

	struct StudentArray studentArray;
	studentArray.maxLength = SIZE;
	studentArray.length = 0;
	int result;

	// 입력
	result = readStudentArray(&studentArray, "student.txt");
	// 출력
	result = writeStudentArray(&studentArray, "studentOut.txt");

}