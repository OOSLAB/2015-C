#include "view.h"
enum EEvents studentView() {
	struct Display display[] = {
		{ 0, "�л��޴�" },
		{ eStRegistration, "������û" },
		{ ePrSetGrade, "������ȸ" },
		{ eStSearchGrade, "����" }
	};
	struct Input input = { "�޴�����", 0 };
	return showView(display, 4, input);
}