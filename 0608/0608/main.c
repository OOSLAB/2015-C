#include "mainView.h"
#include "signInView.h"
#include "studentView.h"
#include "professorView.h"

/*
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
*/

void main()
{
	enum EViews selection;
	selection = mainView();

	while (selection != eLogout) {
		switch (selection)
		{
		case eSignIn:
			selection = signInView();
			break;
		case eStudent:
			selection = studentView();
			break;
		case eProfessor:
			selection = professorView();
			break;
		case eSignUp:
			//SignUp();
			break;
		case eStRegistration:
			printf("수강신청입니다.\n");
			selection = 0;
			break;
		case eStSearchGrade:
			printf("성적조회입니다.\n");
			break;
		case ePrCreateClass:
			printf("강좌개설입니다.\n");
			selection = 0;
			break;
		case ePrSetGrade:
			printf("성적입력입니다.\n");
			break;
		case eLogout:
			printf("종료되었습니다.\n");
			break;
		default:
			printf("잘못된 입력입니다.^^\n");
		}
	}
}