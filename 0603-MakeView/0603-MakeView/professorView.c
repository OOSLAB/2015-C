#include "main.h"
#include "professorView.h"
struct Display displayProfessor[] = {
	{ 0, "�����޴�" },
	{ ePrCreateClass, "���°���" },
	{ ePrSetGrade, "�����ο�" },
	{ eLogout, "����" }
};
struct Input inputProfessor = { "�޴�����", 0 };

int professorView() {
	int selection = showView(displayProfessor, inputProfessor);
}
