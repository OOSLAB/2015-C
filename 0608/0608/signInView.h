
#include <stdio.h>
#include <string.h>
#include "view.h"
#include "signInControl.h"


//�α����ϴ� ��
enum EEvents signInView()
{
	//1. ����ڿ��� �Է� OK
	//2. ���Ͽ��� �ϳ��� �����鼭 ��
	//3. �α��� ����, ����� ����

	char id[20], password[20];
	struct User user;
	printf("���̵�: ");
	scanf_s("%s", id, sizeof(id));
	printf("�н�����: ");
	scanf_s("%s", password, sizeof(password));

	// signInControl.h
	user = getUser(id, password);

	enum EEvents selection;
	if (strcmp(user.type, "�л�") == 0) {
		printf("%s �� ȯ������\n", user.name);
		selection = eStudent;
	}
	else if (strcmp(user.type, "����") == 0) {
		printf("%s �� ȯ������\n", user.name);
		selection = eProfessor;
	}
	else {
		selection = eLogout;
		printf("�߸��� ȸ�� �����Դϴ�. %s\n", user.type);
	}
	return selection;
}

