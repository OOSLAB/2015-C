#include "main.h"
#include "stSearchGradeView.h"
struct Display displayStSearchGrade[] = {
	{ 0, "¼ºÀûÁ¶È¸" },
	{ 99, "ºóÄ­" },
	{ 99, "ºóÄ­" },
	{ eLogout, "Á¾·á" }
};
struct Input inputStSearchGrade = { "¸Ş´º¼±ÅÃ", 0 };

int stSearchGradeView() {
	int selection = showView(displayStSearchGrade, inputStSearchGrade);
}