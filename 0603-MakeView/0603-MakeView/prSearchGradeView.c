#include "main.h"
#include "prSearchGradeView.h"
struct Display displayPrSearchGrade[] = {
	{ 0, "������ȸ" },
	{ 99, "��ĭ" },
	{ 99, "��ĭ" },
	{ eLogout, "����" }
};
struct Input inputPrSearchGrade = { "�޴�����", 0 };

int prSearchGradeView() {
	int selection = showView(displayPrSearchGrade, inputPrSearchGrade);
}