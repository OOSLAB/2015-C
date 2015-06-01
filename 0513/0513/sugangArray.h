#pragma once

#define SIZE 6
#include "sugang.h"

struct SugangArray {
	struct Sugang elm[SIZE];
	int maxLength;
	int length;
};

extern struct SugangArray sArray;

int readSugangArray(struct SugangArray *sArray, char *fileName);
int writeSugangArray(struct SugangArray *sArray, char *fileName);