#include <stdio.h>

int mainView()
{
	int selectNum;

	system("cls");
	printf("[�л���� �ý���]\n");
	printf("1. �α���\n");
	printf("2. ȸ������\n");
	printf("0. ����\n");
	printf("�޴�����: ");
	scanf_s("%d", &selectNum);
	return selectNum;

}