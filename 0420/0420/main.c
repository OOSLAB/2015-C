#include <stdio.h>
#include "studentArray.h"
// Macro�� �̿��� ��� ����
#define SIZE 6

void main()
{
	struct StudentArray studentArray;
	studentArray.maxLength = SIZE;
	studentArray.length = 0;

	// ���� �Է�
	int length = readScore(studentArray);
	// ���� ��� ���
	computeAverage(studentArray);
	// ���� ��� ���
	setGrade(studentArray);
	// ����
	computeRank(studentArray);
	//���� ���
	printScore(studentArray);
}