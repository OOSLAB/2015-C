#include <stdio.h>
#include <string.h>
#include "mainView.h"
#include "studentView.h"
#include "professorView.h"

enum EViews {eLogout, eMainView, eStudentView, eProfessorView, eRegistrationView};
// 회원 구조체 변수 만들기
typedef struct user
{
	char id[20], password[20], name[20], type[20];
} User;

// struct user == User
// struct user 변수명
// User 변수명

// 회원가입
void SignUp()
{
	User user;
	FILE *fp;
	fopen_s(&fp, "user.txt", "a");

	//화면 지우는 거
	system("cls");

	printf("[회원가입]\n");
	printf("아이디: ");
	scanf_s("%s", user.id, sizeof(user.id));
	printf("패스워드: ");
	scanf_s("%s", user.password, sizeof(user.password));
	printf("이름: ");
	scanf_s("%s", user.name, sizeof(user.name));
	printf("가입유형: ");
	scanf_s("%s", user.type, sizeof(user.type));

	//화면에 출력
	//printf("%s, %s, %s, %s\n", id, password, name, type);

	//파일에 출력
	fprintf(fp, "%s %s %s %s\n", user.id, user.password, user.name, user.type);
	fclose(fp);
}

//로그인하는 거
User SignIn()
{
	//1. 사용자에게 입력 OK
	//2. 파일에서 하나씩 읽으면서 비교
	//3. 로그인 성공, 사용자 없음

	char id[20], password[20];
	User user;
	int noFields = 0;
	FILE *fp;
	fopen_s(&fp, "user.txt", "r");

	system("cls");

	printf("[로그인]\n");
	printf("아이디: ");
	scanf_s("%s", id, sizeof(id));
	printf("패스워드: ");
	scanf_s("%s", password, sizeof(password));

	while (noFields != EOF)
	{
		noFields = fscanf_s(fp, "%s %s %s %s",
			user.id, sizeof(user.id)
			, user.password, sizeof(user.password)
			, user.name, sizeof(user.name)
			, user.type, sizeof(user.type));

		if (strcmp(id, user.id) == 0
			&& strcmp(password, user.password) == 0)
		{
			printf("%s 님 환영ㅋㅋ\n", user.name);
			fclose(fp);
			return user;
		}
		strcpy_s(user.id, sizeof(id), "");
		strcpy_s(user.password, sizeof(password), "");

		//printf("%s %s %s %s\n", fid, fpassword, fname, ftype);
	}
	printf("그런 사용자 없음 ㅋㅋ\n");
	fclose(fp);
}

void main()
{
	enum EViews selection;
	User user;

	selection = mainView();

	while (selection != eLogout) {
		switch (selection)
		{
		case 1:
			// user.type == "학생" 학생메뉴 
			// user.type == "교수" 교수메뉴
			user = SignIn();
			if (strcmp(user.type, "학생") == 0) {
				selection = studentView();
			}
			else if (strcmp(user.type, "교수") == 0) {
				selection = professorView();
			}
			else {
				printf("잘못된 회원 종류입니다. %s\n", user.type);
			}
			break;
		case 2:
			SignUp();
			break;
		case 3:
			printf("수강신청입니다.\n");
			selection = 0;
			break;
		case 4:
			printf("성적조회입니다.\n");
			break;
		case 5:
			printf("강좌개설입니다.\n");
			selection = 0;
			break;
		case 6:
			printf("성적입력입니다.\n");
			break;
		case 0:
			printf("종료되었습니다.\n");
			break;
		default:
			printf("잘못된 입력입니다.^^\n");
		}
	}
}