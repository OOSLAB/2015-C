#include <stdio.h>
#include "studentArray.h"
#include "sugang.h"
// Macro�� �̿��� ��� ����
#define SIZE 6

void main()
{
	/*
	struct StudentArray studentArray;
	studentArray.maxLength = SIZE;
	studentArray.length = 0;
	int result;


	// �Է�
	result = readStudentArray(&studentArray, "student.txt");
	// ���
	result = writeStudentArray(&studentArray, "studentOut.txt");
	*/

	FILE *fp;
	struct Sugang sugang;
	int result;
	// �Է�
	errno_t errNo = fopen_s(&fp, "sugang.txt", "r");
	result = readSugang(&sugang, fp);

	// ���
	errNo = fopen_s(&fp, "sugangOut.txt", "w+");
	result = writeSugang(&sugang, fp);

}