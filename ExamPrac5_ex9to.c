#pragma warning(disable:4996)
#include <stdio.h>

int main() {


	// ����
	int i = 10;
	int* pi = &i;
	printf("%d %p\n", i, pi); // 10 0000008677EFF8F4
	(*pi)++;
	printf("%d %p\n", i, pi); // 11 0000008677EFF8F4
	*pi++; // *(pi++)�� ����
	printf("%d %p\n", i, pi); // 11 0000008677EFF8F8
	printf("%d %p\n", *pi, pi); // ������ 0000008677EFF8F8

	// ����
	int x[5] = { 10, 20, 30, 40, 50 };
	int* p = x;
	p[0] = 20; // �迭ó�� �ε����� �����Ͽ� ���� ������ �� ����.
	printf("%d", x[0]); // 20



}