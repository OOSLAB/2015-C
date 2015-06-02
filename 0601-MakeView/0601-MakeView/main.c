#include <stdio.h>
#include <string.h>
#include "user.h"
#include "class.h"
#include "enroll.h"
#include "course.h"
#include "mainView.h"
#include "studentView.h"
#include "professorView.h"
#include "enrollView.h"
#include "scoreView.h"
#include "courseMakeView.h"
#include "scoreInputView.h"

enum EViews {eLogout, eMainView, eStudentView, eProfessorView, eRegistrationView};

int signUp()
{
	User user;
	FILE *fp;
	int selection;
	fopen_s(&fp, "user.txt", "a");

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

	fprintf(fp, "%s %s %s %s\n", user.id, user.password, user.name, user.type);
	fclose(fp);
	return selection = 11;
}

User signIn()
{
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
			fclose(fp);
			return user;
		}
		strcpy_s(user.id, sizeof(id), "");
		strcpy_s(user.password, sizeof(password), "");
	}
	strcpy_s(user.type, sizeof(user.type), "");
	return user;
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
			user = signIn();
			if (strcmp(user.type, "�л�") == 0) {
				selection = 11;
			}
			else if (strcmp(user.type, "����") == 0) {
				selection = 12;
			}
			else {
				printf("�߸��� ȸ�� �����Դϴ�. %s\n", user.type);
			}
			break;
		case 2:
			selection = signUp();
			break;
		case 3:
			selection = enrollView(user);
			break;
		case 4:
			selection = scoreView(user);
			break;
		case 5:
			selection = courseMakeView(user);
			break;
		case 6:
			selection = scoreInputView(user);
			break;
		case 0:
			printf("����Ǿ����ϴ�.\n");
			break;
		case 11:
			selection = studentView();
			break;
		case 12:
			selection = professorView();
			break;
		default:
			selection = mainView();
		}
	}
}