#include <stdio.h>
#include "utility.h"
// Macro�� �̿��� ��� ����
#define SIZE 5

void main()
{
	// �л� �ڷ��� ����
	struct Student student[SIZE];

	// ���� �Է�
	readScore(student, SIZE);
	// ���� ��� ���
	computeAverage(student, SIZE);
	// ���� ��� ���
	setGrade(student, SIZE);
	// ����
	computeRank(student, SIZE);
	//���� ���
	printScore(student, SIZE);
}