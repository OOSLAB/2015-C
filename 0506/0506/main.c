#include <stdio.h>
#include "sugangArray.h"

void main()
{
	struct SugangArray sugangArray;
	sugangArray.maxLength = SIZE;
	sugangArray.length = 0;
	int result;


	// �Է�
	result = readSugangArray(&sugangArray, "sugang.txt");
	// ���
	result = writeSugangArray(&sugangArray, "sugangOut.txt");

	sArray.length = 3;
}