#include <stdio.h>
#include <string.h>

int scoreView(User user)
{
	int selectNum;
	int noFields = 0;
	int count = 0;
	int i;
	int num;
	FILE *fp;
	Class classArray[MAX];
	Enroll enrollArray[MAX];
	Enroll temp;

	fopen_s(&fp, "class.txt", "r");
	while (noFields != EOF)
	{
		noFields = fscanf_s(fp, "%d", &num);
		noFields = fscanf_s(fp, "%s", classArray[num].name
			, sizeof(classArray[num].name));
	}
	fclose(fp);

	noFields = 0;
	fopen_s(&fp, "enroll.txt", "r");
	while (noFields != EOF)
	{
		noFields = fscanf_s(fp, "%d %d %s %s"
			, &temp.classNum
			, &temp.courseNum
			, temp.userId
			, sizeof(temp.userId)
			, temp.score
			, sizeof(temp.score));
		if (strcmp(temp.userId, user.id) == 0)
		{
			enrollArray[count++] = temp;
		}
	}
	fclose(fp);

	system("cls");
	printf("[��������]\n");
	printf("********���� ���********\n");
	for (i = 0; i < count - 1; i++)
	{
		printf_s("%s: %s\n", classArray[enrollArray[i].classNum].name, enrollArray[i].score);
	}
	printf("************************\n");
	printf("�޴�����: ");
	scanf_s("%d", &selectNum);
	return selectNum = 11;

}