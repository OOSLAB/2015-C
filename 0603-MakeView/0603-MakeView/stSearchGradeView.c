#include "main.h"
#include "stSearchGradeView.h"
struct Display displayStSearchGrade[] = {
	{ 0, "������ȸ" },
	{ 99, "��ĭ" },
	{ 99, "��ĭ" },
	{ eLogout, "����" }
};
struct Input inputStSearchGrade = { "�޴�����", 0 };

int stSearchGradeView() {
	int selection = showView(displayStSearchGrade, inputStSearchGrade);
}