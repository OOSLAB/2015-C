#include <stdio.h>

int professorView()
{
	int selection;

	printf("[교수메뉴]\n");
	printf("5. 강좌개설\n");
	printf("6. 성적부여\n");
	printf("0. 로그아웃\n");
	printf("메뉴선택: ");
	scanf_s("%d", &selection);
	return selection;
}