#include <stdio.h>
#include "utility.h"
// Macro�� �̿��� ��� ����
#define SIZE 3

void main()
{
	int kor[SIZE];
	int math[SIZE];
	char grade[SIZE];
	int rank[SIZE];
	int sum;
	float average;

	readScore(kor, SIZE);
	sum = computeSum(kor[0],kor[1],kor[2], SIZE);
	// ���� ��� ���
	setGrade(grade, kor, SIZE);
	// ����
	computeRankA(rank, kor, SIZE);
	computeRankD(rank, kor, SIZE);
	// ���
	average = (float)sum / SIZE;
	printScore(kor, SIZE);
}