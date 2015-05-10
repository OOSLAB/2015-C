#pragma once
#define SIZE 6
struct Student {
	// fields
	char *name;
	int kor;
	int math;
	float average;
	char grade;
	int rank;
};

struct StudentArray {
	struct Student student[SIZE];
	int maxLength;
	int length;
};