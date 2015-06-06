#include "main.h"
#include "prSearchGradeView.h"
struct Display displayPrSearchGrade[] = {
	{ 0, "¼ºÀûÁ¶È¸" },
	{ 99, "ºóÄ­" },
	{ 99, "ºóÄ­" },
	{ eLogout, "Á¾·á" }
};
struct Input inputPrSearchGrade = { "¸Ş´º¼±ÅÃ", 0 };

int prSearchGradeView() {
	int selection = showView(displayPrSearchGrade, inputPrSearchGrade);
}