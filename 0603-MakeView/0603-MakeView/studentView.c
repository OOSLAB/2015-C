#include "main.h"
#include "studentView.h"
struct Display displayStudent[] = {
	{ 0, "�л��޴�" },
	{ eStRegistration, "������û" },
	{ ePrSetGrade, "������ȸ" },
	{ eLogout, "����" }
};
struct Input inputStudent = { "�޴�����", 0 };

int studentView() {
	int selection = showView(displayStudent, inputStudent);
}
