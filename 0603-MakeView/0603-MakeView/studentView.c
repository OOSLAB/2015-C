#include "main.h"
#include "studentView.h"
struct Display displayStudent[] = {
	{ 0, "학생메뉴" },
	{ eStRegistration, "수강신청" },
	{ ePrSetGrade, "성적조회" },
	{ eLogout, "종료" }
};
struct Input inputStudent = { "메뉴선택", 0 };

int studentView() {
	int selection = showView(displayStudent, inputStudent);
}
