#pragma once
enum EEvents {
	eLogout,
	eSignIn,
	eSignUp,
	eMain,
	eStudent,
	eProfessor,
	eStRegistration,
	eStSearchGrade,
	ePrCreateClass,
	ePrSerachClass,
	ePrSetGrade,
	ePrSearchGrade
};
struct Display {
	enum EEvents id;
	char *menu;
};
struct Input {
	char *prompt;
	int id;
};
enum EEvents showView(struct Display *display, int length, struct Input input);