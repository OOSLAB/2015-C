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
	printf("[강좌개설]\n");
	printf("********과목 목록********\n");
	for (i = 1; i < count; i++)
	{
		printf_s("%d. %s\n", classArray[i].num, classArray[i].name);
	}
	printf("************************\n");
	printf("과목번호: ");
	scanf_s("%d", &course.classNum);
	printf("강좌명: ");
	scanf_s("%s", course.name, sizeof(course.name));
	printf("강좌번호: ");
	scanf_s("%d", &course.num);
	printf("연도: ");
	scanf_s("%d", &course.year);
	printf("학기: ");
	scanf_s("%d", &course.semester);
	printf("인원: ");
	scanf_s("%d", &course.size);

	noFields = 0;
	fopen_s(&fp, "course.txt", "a");
	fprintf_s(fp, "%d %s %d %s %d %d %d\n", course.num, user.id, course.classNum, course.name, course.year, course.semester, course.size);
	fclose(fp);

	return selectNum = 12;

}