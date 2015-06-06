#include "main.h"
#include "stRegistrationView.h"
struct Display displayStRegistration[] = {
	{ 0, "¼ö°­½ÅÃ»" },
	{ 99, "ºóÄ­" },
	{ 99, "ºóÄ­" },
	{ eLogout, "Á¾·á" }
};
struct Input inputStRegistration = { "¸Þ´º¼±ÅÃ", 0 };

int stRegistrationView() {
	int selection = showView(displayStRegistration, inputStRegistration);
}