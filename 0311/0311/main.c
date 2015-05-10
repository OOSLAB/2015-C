
// 기본적인 데이터의 타입: int, float, char
/*
bit: 0, 1을 나타냄
1bit로 표현가능한 갯수: 2개
byte: 가장 기본적인 데이터의 단위
1byte는 8bits
*/
/*
기본타입(Basic, Primitive Type)
char: 1byte
int: 4bytes
int의 표현가능한 갯수: 2의 32제곱 개
float: 4bytes
*/

// 변수(Variable, Type의 실체(Instance))는 Type으로부터 실체화(Instanciation)이 된다.

/*
배열(Array)
index는 0부터 시작한다.
배열의 선언: Type Variable[갯수]
배열 원소에 값의 할당 : Variable[index] = 값

변수의 종류
데이터(Data): 값
포인터(Pointer): 주소, 찾아가기 위해서 사용한다.

프로그램
- 데이터 정의(Data Declaration)
- 명령어(Instruction)
- 계산(Computation)
- 제어의 흐름(Flow of Control)
1. 반복(Iteration, Loop)
*/

#include <stdio.h>

void main()
{
	int grade[5];	// 8번지
	int sum;
	int i;

	for (i = 0; i<5; i++)
	{
		grade[i] = i * 10;
		printf("grade[%d]: %d, 주소: %d, %d\n", i, grade[i], &grade[i], (int)grade + (i * 4));
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