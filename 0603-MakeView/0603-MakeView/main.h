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

int showView(struct Display *display, struct Input input);