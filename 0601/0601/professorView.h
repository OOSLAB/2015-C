#include <stdio.h>

int professorView()
{
	int selection;

	printf("[�����޴�]\n");
	printf("5. ���°���\n");
	printf("6. �����ο�\n");
	printf("0. �α׾ƿ�\n");
	printf("�޴�����: ");
	scanf_s("%d", &selection);
	return selection;
}