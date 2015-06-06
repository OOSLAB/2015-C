#include "main.h"
#include "prCreateClassView.h"
struct Display displayPrCreateClass[] = {
	{ 0, "°­ÁÂ°³¼³" },
	{ 99, "ºóÄ­" },
	{ 99, "ºóÄ­" },
	{ eLogout, "Á¾·á" }
};
struct Input inputPrCreateClass = { "¸Þ´º¼±ÅÃ", 0 };

int prCreateClassView() {
	int selection = showView(displayPrCreateClass, inputPrCreateClass);
}