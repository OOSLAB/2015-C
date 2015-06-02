#include <stdio.h>

int enrollView(User user)
{
	int selectNum;
	int noFields = 0;
	int count = 0;
	int temp;
	int i;
	FILE *fp;
	Class classArray[MAX];
	Course courseArray[MAX];
	Enroll enroll;

	fopen_s(&fp, "class.txt", "r");
	while (noFields != EOF)
	{
		noFields = fscanf_s(fp, "%d", &temp);
		noFields = fscanf_s(fp, "%s", classArray[temp].name
			, sizeof(classArray[temp].name));
	}
	fclose(fp);

	noFields = 0;
	fopen_s(&fp, "course.txt", "r");
	while (noFields != EOF)
	{
		noFields = fscanf_s(fp, "%d %s %d %s %d %d %d"
			, &(courseArray[count].num)
			, courseArray[count].userId
			, sizeof(courseArray[count].userId)
			, &courseArray[count].classNum
			, courseArray[count].name
			, sizeof(courseArray[count].name)
			, &courseArray[count].year
			, &courseArray[count].semester
			, &courseArray[count].size
			);
		count++;
	}
	fclose(fp);

	system("cls");
	printf("[수강신청]\n");
	printf("********강좌 목록********\n");
	for (i = 0; i < count-1; i++)
	{
		printf_s("%d. %s %s\n", courseArray[i].num, classArray[courseArray[i].classNum].name, courseArray[i].name);
	}
	printf("************************\n");
	printf("강좌 선택: ");
	scanf_s("%d", &enroll.courseNum);

	noFields = 0;
	fopen_s(&fp, "enroll.txt", "a");
	for (i = 0; i < count - 1; i++)
	{
		if (enroll.courseNum == courseArray[i].num)
		{
			fprintf_s(fp, "%d %d %s %s\n", enroll.courseNum, courseArray[i].classNum, user.id, "-");
			break;
		}
	}
	fclose(fp);

	return selectNum = 11;

}