#include "main.h"
#include "prSerachClassView.h"
struct Display displayprSerachClass[] = {
	{ 0, "°­ÁÂÁ¶È¸" },
	{ 99, "ºóÄ­" },
	{ 99, "ºóÄ­" },
	{ eLogout, "Á¾·á" }
};
struct Input inputprSerachClass = { "¸Þ´º¼±ÅÃ", 0 };

int prSerachClassView() {
	int selection = showView(displayprSerachClass, inputprSerachClass);
}