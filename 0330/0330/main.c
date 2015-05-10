#include <stdio.h>
#include "utility.h"
// Macro�� �̿��� ��� ����
#define SIZE 3



void main()
{
	// ����
	int kor[SIZE];
	// ���
	char grade[SIZE];
	// ����
	int rank[SIZE];
	// �߰� ����
	int sum;
	float average;
	int i;
	int iMax, iMin;

	sum = 0;
	for (i = 0; i < SIZE; i++) {
		// ���� �Է�: Ű����
		scanf_s("%d", &(kor[i])); // <- type
		// �ջ�
		sum = sum + kor[i];
	}

	// ���� ��� ���
	setGrade(grade, kor, SIZE);

	// ���� ū �� ã��
	iMax = findMax(kor, SIZE);
	printf("Max Index: %d, Max Value: %d\n", iMax, kor[iMax]); 

	// ���� ���� �� ã��
	iMin = findMin(kor, SIZE);
	printf("Min Index: %d, Min Value: %d\n", iMin, kor[iMin]);

	// ����
	// ���
	average = sum / SIZE;

	for (i = 0; i < SIZE; i++) {
		printf("%d: %c\n", kor[i], grade[i]); // -> monitor
	}
	printf("%d %f\n", sum, average); // -> monitor
}