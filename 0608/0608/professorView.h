#include "view.h"
enum EEvents professorView() {
	struct Display display[] = {
		{ 0, "�����޴�" },
		{ ePrCreateClass, "���°���" },
		{ ePrSetGrade, "�����ο�" },
		{ eLogout, "����" }
	};
	struct Input input = { "�޴�����", 0 };

	enum EEvents selection = showView(display, 4, input);
	return selection;
}