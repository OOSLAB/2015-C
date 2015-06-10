#include "view.h"
enum EEvents studentView() {
	struct Display display[] = {
		{ 0, "학생메뉴" },
		{ eStRegistration, "수강신청" },
		{ ePrSetGrade, "성적조회" },
		{ eStSearchGrade, "종료" }
	};
	struct Input input = { "메뉴선택", 0 };
	return showView(display, 4, input);
}