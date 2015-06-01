#include <stdio.h>
#include <string.h>

// �Լ� ������Ÿ�� �����Ϸ����� �˷��ֱ�
void StudentMenuView();
void ProfessorMenuView();

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

// User �޾Ƽ� ������ �����޴� �л��̸� �л��޴�
void TypeMenuView(User user)
{
	// user.type == "�л�" �л��޴� 
	// user.type == "����" �����޴�
	// #include <string.h>
	// strcmp( str1, str2 ) == 0

	//ȭ�������
	system("cls");

	if (strcmp(user.type, "�л�") == 0)
	{
		//printf("�л��޴�!\n");
		StudentMenuView();
	}
	else if (strcmp(user.type, "����") == 0)
	{
		//printf("�����޴�!\n");
		ProfessorMenuView();
	}
	else
	{
		printf("�߸��� ȸ�� �����Դϴ�. %s\n", user.type);
	}

}

void StudentMenuView()
{
	int selectNum;

	printf("[�л��޴�]\n");
	printf("1. ������û\n");
	printf("2. ������ȸ\n");
	printf("0. �α׾ƿ�\n");
	printf("�޴�����: ");
	scanf_s("%d", &selectNum);

	switch (selectNum)
	{
	case 1:
		printf("������û�Դϴ�.\n");
		break;
	case 2:
		printf("������ȸ�Դϴ�.\n");
		break;
	case 0:
		printf("�α׾ƿ��Ǿ����ϴ�.\n");
		break;
	default:
		printf("�߸��� �Է��Դϴ�.^^\n");
	}
}

void ProfessorMenuView()
{
	int selectNum;

	printf("[�����޴�]\n");
	printf("1. ���°���\n");
	printf("2. �����ο�\n");
	printf("0. �α׾ƿ�\n");
	printf("�޴�����: ");
	scanf_s("%d", &selectNum);

	switch (selectNum)
	{
	case 1:
		printf("���°����Դϴ�.\n");
		break;
	case 2:
		printf("�����ο��Դϴ�.\n");
		break;
	case 0:
		printf("�α׾ƿ��Ǿ����ϴ�.\n");
		break;
	default:
		printf("�߸��� �Է��Դϴ�.^^\n");
	}
}

void main()
{
	int selectNum;

	printf("[�л���� �ý���]\n");
	printf("1. �α���\n");
	printf("2. ȸ������\n");
	printf("0. ����\n");
	printf("�޴�����: ");
	scanf_s("%d", &selectNum);

	switch (selectNum)
	{
	case 1:
		TypeMenuView(SignIn());
		break;
	case 2:
		SignUp();
		break;
	case 0:
		printf("����Ǿ����ϴ�.\n");
		break;
	default:
		printf("�߸��� �Է��Դϴ�.^^\n");
	}
}