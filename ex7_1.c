#include <stdio.h>

/*
// static -> ���� ����
// auto -> ���� ����. ���� ���������� ������ �� auto�� �����Ǿ� ����
void sub() {
	static int a = 0;
	int b = 0;
	printf("%d %d\n", a, b);
	a++; b++;
}

int main() {
	sub(); // 0 0
	sub(); // 1 0
	sub(); // 2 0
}
*/



// extern -> �ܺ� ����
extern sub();
extern num;

int main() {
	sub();
	sub();
	sub();
	printf("num = %d", num);
}
