#pragma warning(disable:4996)
#include <stdio.h>

int main() {


	// 주의
	int i = 10;
	int* pi = &i;
	printf("%d %p\n", i, pi); // 10 0000008677EFF8F4
	(*pi)++;
	printf("%d %p\n", i, pi); // 11 0000008677EFF8F4
	*pi++; // *(pi++)과 같음
	printf("%d %p\n", i, pi); // 11 0000008677EFF8F8
	printf("%d %p\n", *pi, pi); // 쓰레기 0000008677EFF8F8

	// 주의
	int x[5] = { 10, 20, 30, 40, 50 };
	int* p = x;
	p[0] = 20; // 배열처럼 인덱스로 접근하여 값을 변경할 수 있음.
	printf("%d", x[0]); // 20



}