#include <stdio.h>
#include "student.h"
// Macro�� �̿��� ��� ����
#define SIZE 5

void main()
{
	// �л� �ڷ��� ����
	struct Student student[SIZE];
	// ���� �Է�
	int length = readScore(student);
	// ���� ��� ���
	computeAverage(student, length);
	// ���� ��� ���
	setGrade(student, length);
	// ����
	computeRank(student, length);
	//���� ���
	printScore(student, length);
}