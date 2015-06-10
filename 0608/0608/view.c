#include "view.h"
enum EEvents showView(struct Display *display, int length, struct Input input)
{
	int i = 0;

//	system("cls");
	printf("[%s]\n", display[i].menu);
	for (i = 1; i < length; i++) {
		printf("%d, %s\n", display[i].id, display[i].menu);
	}
	printf("%s: ", input.prompt);
	scanf_s("%d", &(input.id));
	return input.id;
}
