#include <stdio.h>
#include "studentArray.h"
// Macro를 이용한 상수 정의
#define SIZE 6

void main()
{
	struct StudentArray studentArray;
	studentArray.maxLength = SIZE;
	studentArray.length = 0;

	// 성적 입력
	int length = readScore(studentArray);
	// 성적 평균 계산
	computeAverage(studentArray);
	// 성적 등급 계산
	setGrade(studentArray);
	// 석차
	computeRank(studentArray);
	//성적 출력
	printScore(studentArray);
}