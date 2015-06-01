#include <stdio.h>

void main()
{
	int x;
	printf("입력: ");
	scanf_s("%d", &x);


	if (x == 1)
		printf("1번선택\n");
	else if (x==2)
		printf("2번선택\n");
}