#include "main.h"
#include "prSetGradeView.h"
struct Display displayPrSetGrade[] = {
	{ 0, "¼ºÀûÀÔ·Â" },
	{ 99, "ºóÄ­" },
	{ 99, "ºóÄ­" },
	{ eLogout, "Á¾·á" }
};
struct Input inputPrSetGrade = { "¸Ş´º¼±ÅÃ", 0 };

int prSetGradeView() {
	int selection = showView(displayPrSetGrade, inputPrSetGrade);
}