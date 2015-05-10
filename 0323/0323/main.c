#include <stdio.h>

void main()
{
	int kor[5];
	int rank[5];
	int sum;
	float average;
	
	int i;
	sum = 0;
	for (i = 0; i < 5; i++) {
		// 성적 입력: 키보드
		scanf_s("%d", &(kor[i])); // <- type
		// 합산
		sum = sum + kor[i];
	}

	// 평균
	average = sum / 5.0;
	// 석차

	for (i = 0; i < 5; i++) {
		printf("%d\n", kor[i]); // -> monitor
	}
	printf("%d %f\n", sum, average); // -> monitor
}