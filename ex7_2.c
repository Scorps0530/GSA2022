#include <stdio.h>

// extern �κ��� �����Ű�� ���� �ҽ�����
void sub() {
	static int a = 0;
	int b = 0;
	printf("%d %d\n", a, b);
	a++; b++;
}

int num = 4;