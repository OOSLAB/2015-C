#include <stdio.h>
#include "studentArray.h"
// Macro�� �̿��� ��� ����

void main()
{
	struct StudentArray studentArray;
	studentArray.maxLength = SIZE;
	studentArray.length = 0;

	// ���� �Է�
	readScore(&studentArray);
	// ���� ��� ���
	computeAverage(studentArray);
	// ���� ��� ���
	setGrade(studentArray);
	// ����
	computeRank(studentArray);
	//���� ���
	printScore(studentArray);
}