#include "mainView.h"
#include "signInView.h"
#include "studentView.h"
#include "professorView.h"

/*
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
*/

void main()
{
	enum EViews selection;
	selection = mainView();

	while (selection != eLogout) {
		switch (selection)
		{
		case eSignIn:
			selection = signInView();
			break;
		case eStudent:
			selection = studentView();
			break;
		case eProfessor:
			selection = professorView();
			break;
		case eSignUp:
			//SignUp();
			break;
		case eStRegistration:
			printf("������û�Դϴ�.\n");
			selection = 0;
			break;
		case eStSearchGrade:
			printf("������ȸ�Դϴ�.\n");
			break;
		case ePrCreateClass:
			printf("���°����Դϴ�.\n");
			selection = 0;
			break;
		case ePrSetGrade:
			printf("�����Է��Դϴ�.\n");
			break;
		case eLogout:
			printf("����Ǿ����ϴ�.\n");
			break;
		default:
			printf("�߸��� �Է��Դϴ�.^^\n");
		}
	}
}