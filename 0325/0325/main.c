#include <stdio.h>
// Macro�� �̿��� ��� ����
#define SIZE 3

void main()
{
	int kor[SIZE];
	int rank[SIZE];
	char grade[SIZE];
	int sum;
	float average;

	int i;
	sum = 0;
	for (i = 0; i < SIZE; i++) {
		// ���� �Է�: Ű����
		scanf_s("%d", &(kor[i])); // <- type
		// ���� ���
		// 90<=a<=100
		// 80<=b<  90
		// 70<=c<  80
		// 60<=d<  70
		//  0<=f<  60
		if (kor[i]>100)
			grade[i] = 'x';
		else if (kor[i] >= 90)
			grade[i] = 'a';
		else if (kor[i] >= 80)
			grade[i] = 'b';
		else if (kor[i] >= 70)
			grade[i] = 'c';
		else if (kor[i] >= 60)
			grade[i] = 'd';
		else if (kor[i] >= 0)
			grade[i] = 'f';
		else
			grade[i] = 'y';

		// �ջ�
		sum = sum + kor[i];
	}

	// ���� ū �� ã��
	// 

	// ����
	// ���
	average = sum / SIZE;

	for (i = 0; i < SIZE; i++) {
		printf("%d: %c\n", kor[i], grade[i]); // -> monitor
	}
	printf("%d %f\n", sum, average); // -> monitor
}