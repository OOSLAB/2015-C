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
		// ���� �Է�: Ű����
		scanf_s("%d", &(kor[i])); // <- type
		// �ջ�
		sum = sum + kor[i];
	}

	// ���
	average = sum / 5.0;
	// ����

	for (i = 0; i < 5; i++) {
		printf("%d\n", kor[i]); // -> monitor
	}
	printf("%d %f\n", sum, average); // -> monitor
}