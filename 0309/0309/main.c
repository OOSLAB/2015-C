#include <stdio.h>

void main()		// ������
{
	int x, y;	// x��� �̸����� �޸𸮸� �Ҵ�(�ּ�, ũ��): 0, 4Bytes
	char c;		// ���� �ϳ�

	c = 'a';	// ���ڴ� ����ǥ ���
	x = 4;
	y = x;		// �ּ� = ��

	printf("c: %c, x: %d, y: %d\n", c, x, y);
	printf("Hello World\n");
}