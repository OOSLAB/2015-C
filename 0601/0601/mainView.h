#include <stdio.h>

int mainView()
{
	int selectNum;

	system("cls");
	printf("[학사관리 시스템]\n");
	printf("1. 로그인\n");
	printf("2. 회원가입\n");
	printf("0. 종료\n");
	printf("메뉴선택: ");
	scanf_s("%d", &selectNum);
	return selectNum;

}