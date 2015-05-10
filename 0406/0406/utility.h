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

int searchFirstIndex(struct Student s[], int length) {
	int iMax, i;
	// iMax�� ������ length���̸� ��δ� ��� �� ������
	iMax = length;
	// ù��° UNDEFINED �� index ã��
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
	for (i = iMax+1; i < length; i++) {
		if (s[i].rank == UNDEFINED) {
			if (s[i].kor > s[iMax].kor) {
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

// array�� �Էµ� ������ grade�� ������η� ��ȯ�Ͽ� ����
void setGrade(struct Student s[], int size) {
	int i;
	for (i = 0; i<size; i++) {
		if (s[i].kor>100)
			s[i].grade = 'x';
		else if (s[i].kor >= 90)
			s[i].grade = 'a';
		else if (s[i].kor >= 80)
			s[i].grade = 'b';
		else if (s[i].kor >= 70)
			s[i].grade = 'c';
		else if (s[i].kor >= 60)
			s[i].grade = 'd';
		else if (s[i].kor >= 0)
			s[i].grade = 'f';
		else
			s[i].grade = 'y';
	}
}

int computeSum(struct Student s[], int length) {
	int i;
	int sum = 0;
	for (i = 0; i < length; i++) {
		sum = sum + s[i].kor;
	}
	return sum;
}
void readScore(struct Student s[], int length) {
	int i;
	for (i = 0; i < length; i++) {
		// ���� �Է�: Ű����
		scanf_s("%d", &(s[i].kor)); // <- type
	}
}

void printScore(struct Student s[], int length) {
	int i;
	for (i = 0; i < length; i++) {
		// ���� �Է�: Ű����
		printf("%d: %d�� %d��\n", i, s[i].kor, s[i].rank+1); // <- type
	}
}



