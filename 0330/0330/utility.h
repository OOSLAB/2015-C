int findMax(int *array, int length) {
	int i, iMax;

	iMax = 0;
	for (i = 0; i < length; i++) {
		if (array[i] > array[iMax]) {
			iMax = i;
		}
	}
	return iMax;
}

int findMin(int *array, int size) {
	int i, iMin;

	iMin = 0;
	for (i = 0; i < size; i++) {
		if (array[i] < array[iMin]) {
			iMin = i;
		}
	}
	return iMin;
}

// array에 입력된 성적을 grade에 등급으로로 변환하여 저장
void setGrade(char *grade, int *array, int size) {
	int i;
	for (i = 0; i<size; i++) {
		if (array[i]>100)
			grade[i] = 'x';
		else if (array[i] >= 90)
			grade[i] = 'a';
		else if (array[i] >= 80)
			grade[i] = 'b';
		else if (array[i] >= 70)
			grade[i] = 'c';
		else if (array[i] >= 60)
			grade[i] = 'd';
		else if (array[i] >= 0)
			grade[i] = 'f';
		else
			grade[i] = 'y';
	}
}
