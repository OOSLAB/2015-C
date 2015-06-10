#include "view.h"
enum EEvents professorView() {
	struct Display display[] = {
		{ 0, "교수메뉴" },
		{ ePrCreateClass, "강좌개설" },
		{ ePrSetGrade, "성적부여" },
		{ eLogout, "종료" }
	};
	struct Input input = { "메뉴선택", 0 };

	enum EEvents selection = showView(display, 4, input);
	return selection;
}