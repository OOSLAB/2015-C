#include "main.h"
#include "professorView.h"
struct Display displayProfessor[] = {
	{ 0, "교수메뉴" },
	{ ePrCreateClass, "강좌개설" },
	{ ePrSetGrade, "성적부여" },
	{ eLogout, "종료" }
};
struct Input inputProfessor = { "메뉴선택", 0 };

int professorView() {
	int selection = showView(displayProfessor, inputProfessor);
}
