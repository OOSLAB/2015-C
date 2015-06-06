#include "main.h"
#include "mainView.h"
struct Display displayMain[] = {
	{ 0, "학사관리시스템" },
	{ eSignIn, "로그인" },
	{ eSignUp, "회원가입" },
	{ eLogout, "종료" }
};
struct Input inputMain = {"메뉴선택", 0};

int mainView() {
	int selection = showView(displayMain, inputMain);
}