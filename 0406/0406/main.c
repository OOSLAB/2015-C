#include <stdio.h>
#include "utility.h"
// Macro�� �̿��� ��� ����
#define SIZE 5

void main()
{
	int sum;
	float average;
	
	// structure
	struct Student student[SIZE];

	readScore(student, SIZE);
	sum = computeSum(student, SIZE);
	// ���� ��� ���
	setGrade(student, SIZE);
	// ����
	computeRank(student, SIZE);
//	computeRankD(rank, kor, SIZE);
	// ���
	average = (float)sum / SIZE;
	printScore(student, SIZE);
}