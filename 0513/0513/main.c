#include <stdio.h>
#include "sugangArray.h"
#include "mainView.h"

void main()
{
	int result;
	struct SugangArray *sugangArray;
	sugangArray = (struct SugangArray *)malloc(sizeof(struct SugangArray));
	sugangArray->maxLength = SIZE;
	sugangArray->length = 0;


	// �Է�
	result = readSugangArray(sugangArray, "sugang.txt");
	// ���
	result = writeSugangArray(sugangArray, "sugangOut.txt");

	free(sugangArray);

	showMainMenu();
}