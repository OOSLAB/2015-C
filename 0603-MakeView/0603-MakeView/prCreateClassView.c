#include "main.h"
#include "prCreateClassView.h"
struct Display displayPrCreateClass[] = {
	{ 0, "���°���" },
	{ 99, "��ĭ" },
	{ 99, "��ĭ" },
	{ eLogout, "����" }
};
struct Input inputPrCreateClass = { "�޴�����", 0 };

int prCreateClassView() {
	int selection = showView(displayPrCreateClass, inputPrCreateClass);
}