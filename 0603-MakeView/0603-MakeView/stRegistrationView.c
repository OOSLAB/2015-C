#include "main.h"
#include "stRegistrationView.h"
struct Display displayStRegistration[] = {
	{ 0, "������û" },
	{ 99, "��ĭ" },
	{ 99, "��ĭ" },
	{ eLogout, "����" }
};
struct Input inputStRegistration = { "�޴�����", 0 };

int stRegistrationView() {
	int selection = showView(displayStRegistration, inputStRegistration);
}