#pragma once
#include <stdio.h>
// ȸ�� ����ü ���� �����
// user.type == "�л�" �л��޴� 
// user.type == "����" �����޴�
struct User {
	char id[20];
	char password[20];
	char name[20];
	char type[20];
};

int read(struct User *user, FILE *fp) {
	int noFields = fscanf_s(fp, "%s %s %s %s",
		user->id, sizeof(user->id),
		user->password, sizeof(user->password),
		user->name, sizeof(user->name),
		user->type, sizeof(user->type));
	return noFields;
}