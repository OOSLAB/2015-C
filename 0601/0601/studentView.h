#include <stdio.h>
int studentView()
{
	int selection;

	printf("[�л��޴�]\n");
	printf("3. ������û\n");
	printf("4. ������ȸ\n");
	printf("0. �α׾ƿ�\n");
	printf("�޴�����: ");
	scanf_s("%d", &selection);

	return selection;
}