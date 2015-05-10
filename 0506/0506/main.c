#include <stdio.h>
#include "sugangArray.h"

void main()
{
	struct SugangArray sugangArray;
	sugangArray.maxLength = SIZE;
	sugangArray.length = 0;
	int result;


	// 입력
	result = readSugangArray(&sugangArray, "sugang.txt");
	// 출력
	result = writeSugangArray(&sugangArray, "sugangOut.txt");

	sArray.length = 3;
}