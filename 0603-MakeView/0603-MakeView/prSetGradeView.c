#include "main.h"
#include "prSetGradeView.h"
struct Display displayPrSetGrade[] = {
	{ 0, "�����Է�" },
	{ 99, "��ĭ" },
	{ 99, "��ĭ" },
	{ eLogout, "����" }
};
struct Input inputPrSetGrade = { "�޴�����", 0 };

int prSetGradeView() {
	int selection = showView(displayPrSetGrade, inputPrSetGrade);
}