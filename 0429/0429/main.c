#include <stdio.h>
#include "studentArray.h"
// Macro�� �̿��� ��� ����
#define SIZE 6

void main()
{
	struct StudentArray studentArray;
	studentArray.maxLength = SIZE;
	studentArray.length = 0;
	int result;

	// �Է�
	result = readStudentArray(&studentArray, "student.txt");
	// ���
	result = writeStudentArray(&studentArray, "studentOut.txt");

	struct StudentArray studentArray;
	studentArray.maxLength = SIZE;
	studentArray.length = 0;
	int result;

	// �Է�
	result = readStudentArray(&studentArray, "student.txt");
	// ���
	result = writeStudentArray(&studentArray, "studentOut.txt");

}