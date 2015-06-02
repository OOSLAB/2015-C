#include <stdio.h>

int scoreInputView(User user)
{
	int selectNum;
	int noFields = 0;
	int count = 0;
	int temp;
	int i;
	FILE *fp;
	Class classArray[MAX];
	Course courseArray[MAX];
	Enroll enrollArray[MAX];
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

	count = 0;
	noFields = 0;
	fopen_s(&fp, "enroll.txt", "r");
	while (noFields != EOF)
	{
		noFields = fscanf_s(fp, "%d %d %s %s"
			, &(enrollArray[count].courseNum)
			, &(enrollArray[count].classNum)
			, enrollArray[count].userId
			, sizeof(courseArray[count].userId)
			, enrollArray[count].score
			, sizeof(enrollArray[count].score)
			);
		count++;
	}
	fclose(fp);

	system("cls");
	printf("[성적부여]\n");
	printf("********강좌 목록********\n");
	for (i = 0; i < count - 1; i++)
	{
		if (strcmp(courseArray[i].userId, user.id) == 0)
			printf_s("%d. %s %s\n", courseArray[i].num, classArray[courseArray[i].classNum].name, courseArray[i].name);
	}
	printf("************************\n");
	printf("강좌 선택: ");
	scanf_s("%d", &enroll.courseNum);

	for (i = 0; i < count - 1; i++)
	{
		if (enroll.courseNum == enrollArray[i].courseNum)
		{
			printf("%s: ", enrollArray[i].userId);
			scanf_s("%s", enrollArray[i].score, sizeof(enrollArray[i].score));
		}
	}

	noFields = 0;
	fopen_s(&fp, "enroll.txt", "w");
	for (i = 0; i < count - 1; i++)
	{
		if (enroll.courseNum == enrollArray[i].courseNum)
		{
			fprintf(fp, "%d %d %s %s\n", enroll.courseNum, courseArray[i].classNum, enrollArray[i].userId, enrollArray[i].score);
		}
	}
	fclose(fp);
	return selectNum = 11;
}