#include <stdio.h>
#include "studentArray.h"
// Macro�� �̿��� ��� ����
#define SIZE 6

void main()
{
	struct StudentArray studentArray;
	studentArray.maxLength = SIZE;
	studentArray.length = 0;

	// ���� �Է�
	int result = read(&studentArray, "score.txt");
	// ���� ��� ���
	computeAverage(&studentArray);
	// ���� ��� ���
	setGrade(&studentArray);
	// ����
	computeRank(&studentArray);
	//���� ���
	result = write(&studentArray, "scoreOut.txt");
}