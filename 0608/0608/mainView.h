#include "view.h"
enum EEvents mainView() {
	struct Display display[] = {
		{ 0, "학사관리시스템" },
		{ eSignIn, "로그인" },
		{ eSignUp, "회원가입" },
		{ eLogout, "종료" }
	};
	struct Input input = { "메뉴선택", 0 };

	return showView(display, 4, input);
}