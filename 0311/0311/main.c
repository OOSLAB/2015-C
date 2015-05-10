
// �⺻���� �������� Ÿ��: int, float, char
/*
bit: 0, 1�� ��Ÿ��
1bit�� ǥ�������� ����: 2��
byte: ���� �⺻���� �������� ����
1byte�� 8bits
*/
/*
�⺻Ÿ��(Basic, Primitive Type)
char: 1byte
int: 4bytes
int�� ǥ�������� ����: 2�� 32���� ��
float: 4bytes
*/

// ����(Variable, Type�� ��ü(Instance))�� Type���κ��� ��üȭ(Instanciation)�� �ȴ�.

/*
�迭(Array)
index�� 0���� �����Ѵ�.
�迭�� ����: Type Variable[����]
�迭 ���ҿ� ���� �Ҵ� : Variable[index] = ��

������ ����
������(Data): ��
������(Pointer): �ּ�, ã�ư��� ���ؼ� ����Ѵ�.

���α׷�
- ������ ����(Data Declaration)
- ��ɾ�(Instruction)
- ���(Computation)
- ������ �帧(Flow of Control)
1. �ݺ�(Iteration, Loop)
*/

#include <stdio.h>

void main()
{
	int grade[5];	// 8����
	int sum;
	int i;

	for (i = 0; i<5; i++)
	{
		grade[i] = i * 10;
		printf("grade[%d]: %d, �ּ�: %d, %d\n", i, grade[i], &grade[i], (int)grade + (i * 4));
	}

	sum = 0;
	for (i = 0; i<5; i++)
	{
		sum = sum + grade[i];
	}
	printf("sum: %d \n", sum);

	/*
	i = 0;
	while(i<5)
	{
	sum = sum+grade[i];
	i++; // i=i+1;
	}
	*/
}