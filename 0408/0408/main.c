#include <stdio.h>
#include "utility.h"
// Macro를 이용한 상수 정의
#define SIZE 5

void main()
{
	// 학생 자료형 정의
	struct Student student[SIZE];

	// 성적 입력
	readScore(student, SIZE);
	// 성적 평균 계산
	computeAverage(student, SIZE);
	// 성적 등급 계산
	setGrade(student, SIZE);
	// 석차
	computeRank(student, SIZE);
	//성적 출력
	printScore(student, SIZE);
}