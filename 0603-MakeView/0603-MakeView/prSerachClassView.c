#include "main.h"
#include "prSerachClassView.h"
struct Display displayprSerachClass[] = {
	{ 0, "������ȸ" },
	{ 99, "��ĭ" },
	{ 99, "��ĭ" },
	{ eLogout, "����" }
};
struct Input inputprSerachClass = { "�޴�����", 0 };

int prSerachClassView() {
	int selection = showView(displayprSerachClass, inputprSerachClass);
}