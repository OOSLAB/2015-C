#include "main.h"
#include "mainView.h"
struct Display displayMain[] = {
	{ 0, "�л�����ý���" },
	{ eSignIn, "�α���" },
	{ eSignUp, "ȸ������" },
	{ eLogout, "����" }
};
struct Input inputMain = {"�޴�����", 0};

int mainView() {
	int selection = showView(displayMain, inputMain);
}