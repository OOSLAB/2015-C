#define UNDEFINED -1

int findMax(int *array, int *rank, int length) {
	int i, iMax;

	iMax = 0;
	for (i = 0; i < length; i++) {
		if (rank[i] == UNDEFINED) {
			if (array[i] > array[iMax]) {
				iMax = i;
			}
		}
	}
	return iMax;
}

int findMin(int *array, int *rank, int size) {
	int i, iMin;

	iMin = 0;
	for (i = 0; i < size; i++) {
		if (rank[i] == UNDEFINED) {
			if (array[i] < array[iMin]) {
				iMin = i;
			}
		}
	}
	return iMin;
}

// array에 입력된 성적을 grade에 등급으로로 변환하여 저장
void setGrade(char grade[], int *array, int size) {
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

void readScore(int array[], int length) {
	int i;
	for (i = 0; i < length; i++) {
		// 성적 입력: 키보드
		scanf_s("%d", &(array[i])); // <- type
	}
}

void printScore(int array[], int length) {
	int i;
	for (i = 0; i < length; i++) {
		// 성적 입력: 키보드
		printf("%d: %d\n", i, array[i]); // <- type
	}
}

int computeSum(int array[], int length) {
	int i;
	int sum = 0;
	for (i = 0; i < length; i++) {
		sum = sum + array[i];
	}
	return sum;
}

void computeRankA(int rank[], int *data, int size) {
	int i, maxIndex;
	for (i = 0; i < size; i++) {
		rank[i] = UNDEFINED;
	}
	for (i = 0; i < size; i++) {
		maxIndex = findMin(data, rank, size);
		rank[maxIndex] = i;
	}
}
