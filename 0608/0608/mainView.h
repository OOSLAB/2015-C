#include "view.h"
enum EEvents mainView() {
	struct Display display[] = {
		{ 0, "�л�����ý���" },
		{ eSignIn, "�α���" },
		{ eSignUp, "ȸ������" },
		{ eLogout, "����" }
	};
	struct Input input = { "�޴�����", 0 };

	return showView(display, 4, input);
}