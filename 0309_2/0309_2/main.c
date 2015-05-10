#include <stdio.h>

void main()
{
	int kor, eng, math;
	int sum;
	float average;

	kor = 50;
	eng = 70;
	math = 100;
	sum = kor + eng + math;
	average = sum / 3;

	printf("kor:%d, eng:%d, math:%d, sum:%d, average:%f\n", kor, eng, math, sum, average);
}