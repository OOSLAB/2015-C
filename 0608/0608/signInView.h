
#include <stdio.h>
#include <string.h>
#include "view.h"
#include "signInControl.h"


//로그인하는 거
enum EEvents signInView()
{
	//1. 사용자에게 입력 OK
	//2. 파일에서 하나씩 읽으면서 비교
	//3. 로그인 성공, 사용자 없음

	char id[20], password[20];
	struct User user;
	printf("아이디: ");
	scanf_s("%s", id, sizeof(id));
	printf("패스워드: ");
	scanf_s("%s", password, sizeof(password));

	// signInControl.h
	user = getUser(id, password);

	enum EEvents selection;
	if (strcmp(user.type, "학생") == 0) {
		printf("%s 님 환영ㅋㅋ\n", user.name);
		selection = eStudent;
	}
	else if (strcmp(user.type, "교수") == 0) {
		printf("%s 님 환영ㅋㅋ\n", user.name);
		selection = eProfessor;
	}
	else {
		selection = eLogout;
		printf("잘못된 회원 종류입니다. %s\n", user.type);
	}
	return selection;
}

