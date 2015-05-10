#define UNDEFINED -1

struct Student {
	// fields
	char *name;
	int kor;
	int math;
	float average;
	char grade;
	int rank;
};

void readScore(struct Student s[], int length) {
	int i;
	for (i = 0; i < length; i++) {
		// 성적 입력: 키보드
		scanf_s("%d %d", &(s[i].kor), &(s[i].math)); // <- type
	}
}

void printScore(struct Student s[], int length) {
	int i;
	for (i = 0; i < length; i++) {
		// 성적 입력: 키보드
		printf("%d: %f점 %d등\n", i, s[i].average, s[i].rank + 1); // <- type
	}
}

void computeAverage(struct Student s[], int length) {
	int i;
	for (i = 0; i < length; i++) {
		s[i].average = (s[i].kor + s[i].math) / 2.0;
	}
}

// array에 입력된 성적을 grade에 등급으로로 변환하여 저장
void setGrade(struct Student s[], int size) {
	int i;
	for (i = 0; i<size; i++) {
		if (s[i].average>100)
			s[i].grade = 'x';
		else if (s[i].average >= 90)
			s[i].grade = 'a';
		else if (s[i].average >= 80)
			s[i].grade = 'b';
		else if (s[i].average >= 70)
			s[i].grade = 'c';
		else if (s[i].average >= 60)
			s[i].grade = 'd';
		else if (s[i].average >= 0)
			s[i].grade = 'f';
		else
			s[i].grade = 'y';
	}
}

int searchFirstIndex(struct Student s[], int length) {
	int iMax, i;
	// iMax가 끝까지 length값이면 모두다 계산 된 상태임
	iMax = length;
	// 첫번째 UNDEFINED 된 index 찾기
	for (i = 0; i < length; i++) {
		if (s[i].rank == UNDEFINED) {
			iMax = i;
			break;
		}
	}
}
int findMax(struct Student s[], int length) {
	int i, iMax;

	iMax = searchFirstIndex(s, length);
	for (i = iMax + 1; i < length; i++) {
		if (s[i].rank == UNDEFINED) {
			if (s[i].average > s[iMax].average) {
				iMax = i;
			}
		}
	}
	return iMax;
}

void computeRank(struct Student s[], int size) {
	int i, maxIndex;
	for (i = 0; i < size; i++) {
		s[i].rank = UNDEFINED;
	}
	for (i = 0; i < size; i++) {
		maxIndex = findMax(s, size);
		s[maxIndex].rank = i;
	}
}



