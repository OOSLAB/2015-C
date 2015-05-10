#include <stdio.h>
#include "utility.h"
// Macro를 이용한 상수 정의
#define SIZE 3



void main()
{
	// 성적
	int kor[SIZE];
	// 등급
	char grade[SIZE];
	// 석차
	int rank[SIZE];
	// 중간 계산용
	int sum;
	float average;
	int i;
	int iMax, iMin;

	sum = 0;
	for (i = 0; i < SIZE; i++) {
		// 성적 입력: 키보드
		scanf_s("%d", &(kor[i])); // <- type
		// 합산
		sum = sum + kor[i];
	}

	// 성적 등급 계산
	setGrade(grade, kor, SIZE);

	// 제일 큰 수 찾기
	iMax = findMax(kor, SIZE);
	printf("Max Index: %d, Max Value: %d\n", iMax, kor[iMax]); 

	// 제일 작은 수 찾기
	iMin = findMin(kor, SIZE);
	printf("Min Index: %d, Min Value: %d\n", iMin, kor[iMin]);

	// 석차
	// 평균
	average = sum / SIZE;

	for (i = 0; i < SIZE; i++) {
		printf("%d: %c\n", kor[i], grade[i]); // -> monitor
	}
	printf("%d %f\n", sum, average); // -> monitor
}