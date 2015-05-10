#include <stdio.h>

void main()
{
	int kor[10];
	//	int *kor; memory not allocated
	int eng[10];
	int math[10];
	int sum[10];
	float avg[10];
	int i;

	int *p;
	int **pp;

	p = kor;
	pp = (int**)(&kor);


	for (i = 0; i<10; i++)
	{
		kor[i] = i * 10;
		eng[i] = i * 20;
		math[i] = i * 30;
		sum[i] = kor[i] + eng[i] + math[i];
		avg[i] = sum[i] / 2;
	}
	for (i = 0; i<10; i++)
	{
		printf("ÇÐ»ý %d ", i);
		printf("kor[%d]:%d ", i, kor[i]);
		printf("eng[%d]:%d ", i, eng[i]);
		printf("math[%d]:%d ", i, math[i]);
		printf("sum[%d]:%d ", i, sum[i]);
		printf("avg[%d]:%.1f\n", i, avg[i]);
	}
}