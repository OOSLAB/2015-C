#include <stdio.h>
#include <string.h>

// ȸ������
void SignUp()
{
	char id[20], password[20], name[20], type[20];
	FILE *fp;
	fopen_s(&fp, "user.txt", "a");

	//ȭ�� ����� ��
	system("cls");

	printf("[ȸ������]\n");
	printf("���̵�: ");
	scanf_s("%s", id, sizeof(id));
	printf("�н�����: ");
	scanf_s("%s", password, sizeof(password));
	printf("�̸�: ");
	scanf_s("%s", name, sizeof(name));
	printf("��������: ");
	scanf_s("%s", type, sizeof(type));

	//ȭ�鿡 ���
	//printf("%s, %s, %s, %s\n", id, password, name, type);

	//���Ͽ� ���
	fprintf(fp, "%s %s %s %s\n", id, password, name, type);
	fclose(fp);
}

//�α����ϴ� ��
void SignIn()
{
	//1. ����ڿ��� �Է� OK
	//2. ���Ͽ��� �ϳ��� �����鼭 ��
	//3. �α��� ����, ����� ����

	char id[20], password[20];
	char fid[20], fpassword[20], fname[20], ftype[20];
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
			fid, sizeof(fid)
			,fpassword, sizeof(fpassword)
			,fname, sizeof(fname)
			,ftype, sizeof(ftype));

		if ( strcmp(id, fid) == 0 
			&& strcmp(password, fpassword) == 0)
		{
			printf("%s �� ȯ������\n", fname);
			fclose(fp);
			return;
		}
		strcpy_s(fid, sizeof(fid), "");
		strcpy_s(fpassword, sizeof(fpassword), "");

		//printf("%s %s %s %s\n", fid, fpassword, fname, ftype);
	}
	printf("�׷� ����� ���� ����\n");
	fclose(fp);
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
		SignIn();
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