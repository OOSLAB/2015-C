#include <stdio.h>

void main()		// 시작점
{
	int x, y;	// x라는 이름으로 메모리를 할당(주소, 크기): 0, 4Bytes
	char c;		// 문자 하나

	c = 'a';	// 문자는 따옴표 사용
	x = 4;
	y = x;		// 주소 = 값

	printf("c: %c, x: %d, y: %d\n", c, x, y);
	printf("Hello World\n");
}