#include <stdio.h>
#include "utility.h"
// Macro를 이용한 상수 정의
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
	// 성적 등급 계산
	setGrade(grade, kor, SIZE);
	// 석차
	computeRankA(rank, kor, SIZE);
	computeRankD(rank, kor, SIZE);
	// 평균
	average = (float)sum / SIZE;
	printScore(kor, SIZE);
}