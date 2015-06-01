#include <stdio.h>
#include <string.h>
#include "mainView.h"
#include "studentView.h"
#include "professorView.h"

enum EViews {eLogout, eMainView, eStudentView, eProfessorView, eRegistrationView};
// ȸ�� ����ü ���� �����
typedef struct user
{
	char id[20], password[20], name[20], type[20];
} User;

// struct user == User
// struct user ������
// User ������

// ȸ������
void SignUp()
{
	User user;
	FILE *fp;
	fopen_s(&fp, "user.txt", "a");

	//ȭ�� ����� ��
	system("cls");

	printf("[ȸ������]\n");
	printf("���̵�: ");
	scanf_s("%s", user.id, sizeof(user.id));
	printf("�н�����: ");
	scanf_s("%s", user.password, sizeof(user.password));
	printf("�̸�: ");
	scanf_s("%s", user.name, sizeof(user.name));
	printf("��������: ");
	scanf_s("%s", user.type, sizeof(user.type));

	//ȭ�鿡 ���
	//printf("%s, %s, %s, %s\n", id, password, name, type);

	//���Ͽ� ���
	fprintf(fp, "%s %s %s %s\n", user.id, user.password, user.name, user.type);
	fclose(fp);
}

//�α����ϴ� ��
User SignIn()
{
	//1. ����ڿ��� �Է� OK
	//2. ���Ͽ��� �ϳ��� �����鼭 ��
	//3. �α��� ����, ����� ����

	char id[20], password[20];
	User user;
	int noFields = 0;
	FILE *fp;
	fopen_s(&fp, "user.txt", "r");

	system("cls");

	printf("[�α���]\n");
	printf("���̵�: ");
	scanf_s("%s", id, sizeof(id));
	printf("�н�����: ");
	scanf_s("%s", password, sizeof(password));

	while (noFields != EOF)
	{
		noFields = fscanf_s(fp, "%s %s %s %s",
			user.id, sizeof(user.id)
			, user.password, sizeof(user.password)
			, user.name, sizeof(user.name)
			, user.type, sizeof(user.type));

		if (strcmp(id, user.id) == 0
			&& strcmp(password, user.password) == 0)
		{
			printf("%s �� ȯ������\n", user.name);
			fclose(fp);
			return user;
		}
		strcpy_s(user.id, sizeof(id), "");
		strcpy_s(user.password, sizeof(password), "");

		//printf("%s %s %s %s\n", fid, fpassword, fname, ftype);
	}
	printf("�׷� ����� ���� ����\n");
	fclose(fp);
}

void main()
{
	enum EViews selection;
	User user;

	selection = mainView();

	while (selection != eLogout) {
		switch (selection)
		{
		case 1:
			// user.type == "�л�" �л��޴� 
			// user.type == "����" �����޴�
			user = SignIn();
			if (strcmp(user.type, "�л�") == 0) {
				selection = studentView();
			}
			else if (strcmp(user.type, "����") == 0) {
				selection = professorView();
			}
			else {
				printf("�߸��� ȸ�� �����Դϴ�. %s\n", user.type);
			}
			break;
		case 2:
			SignUp();
			break;
		case 3:
			printf("������û�Դϴ�.\n");
			selection = 0;
			break;
		case 4:
			printf("������ȸ�Դϴ�.\n");
			break;
		case 5:
			printf("���°����Դϴ�.\n");
			selection = 0;
			break;
		case 6:
			printf("�����Է��Դϴ�.\n");
			break;
		case 0:
			printf("����Ǿ����ϴ�.\n");
			break;
		default:
			printf("�߸��� �Է��Դϴ�.^^\n");
		}
	}
}