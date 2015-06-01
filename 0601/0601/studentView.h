#include <stdio.h>
int studentView()
{
	int selection;

	printf("[학생메뉴]\n");
	printf("3. 수강신청\n");
	printf("4. 성적조회\n");
	printf("0. 로그아웃\n");
	printf("메뉴선택: ");
	scanf_s("%d", &selection);

	return selection;
}