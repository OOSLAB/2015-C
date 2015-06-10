#pragma once
#include <stdio.h>
// 회원 구조체 변수 만들기
// user.type == "학생" 학생메뉴 
// user.type == "교수" 교수메뉴
struct User {
	char id[20];
	char password[20];
	char name[20];
	char type[20];
};

int read(struct User *user, FILE *fp) {
	int noFields = fscanf_s(fp, "%s %s %s %s",
		user->id, sizeof(user->id),
		user->password, sizeof(user->password),
		user->name, sizeof(user->name),
		user->type, sizeof(user->type));
	return noFields;
}