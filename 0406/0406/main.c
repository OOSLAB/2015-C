#include <stdio.h>
#include "utility.h"
// Macro를 이용한 상수 정의
#define SIZE 5

void main()
{
	int sum;
	float average;
	
	// structure
	struct Student student[SIZE];

	readScore(student, SIZE);
	sum = computeSum(student, SIZE);
	// 성적 등급 계산
	setGrade(student, SIZE);
	// 석차
	computeRank(student, SIZE);
//	computeRankD(rank, kor, SIZE);
	// 평균
	average = (float)sum / SIZE;
	printScore(student, SIZE);
}