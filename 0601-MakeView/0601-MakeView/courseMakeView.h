#include <stdio.h>
#include <string.h>

int courseMakeView(User user)
{
	int selectNum;
	int noFields = 0;
	int count = 0;
	int i;
	int num;
	FILE *fp;
	Class classArray[MAX];
	Course course;

	fopen_s(&fp, "class.txt", "r");
	while (noFields != EOF)
	{
		noFields = fscanf_s(fp, "%d", &num);
		classArray[num].num = num;
		noFields = fscanf_s(fp, "%s", classArray[num].name
			, sizeof(classArray[num].name));
		count++;
	}
	fclose(fp);

	system("cls");
	printf("[���°���]\n");
	printf("********���� ���********\n");
	for (i = 1; i < count; i++)
	{
		printf_s("%d. %s\n", classArray[i].num, classArray[i].name);
	}
	printf("************************\n");
	printf("�����ȣ: ");
	scanf_s("%d", &course.classNum);
	printf("���¸�: ");
	scanf_s("%s", course.name, sizeof(course.name));
	printf("���¹�ȣ: ");
	scanf_s("%d", &course.num);
	printf("����: ");
	scanf_s("%d", &course.year);
	printf("�б�: ");
	scanf_s("%d", &course.semester);
	printf("�ο�: ");
	scanf_s("%d", &course.size);

	noFields = 0;
	fopen_s(&fp, "course.txt", "a");
	fprintf_s(fp, "%d %s %d %s %d %d %d\n", course.num, user.id, course.classNum, course.name, course.year, course.semester, course.size);
	fclose(fp);

	return selectNum = 12;

}