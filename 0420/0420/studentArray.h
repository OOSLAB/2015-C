#pragma once
#include "student.h"
#define SIZE 6
struct StudentArray {
	struct Student student[SIZE];
	int maxLength;
	int length;
};