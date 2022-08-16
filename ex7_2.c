#include <stdio.h>

// extern 부분을 실행시키기 위한 소스파일
void sub() {
	static int a = 0;
	int b = 0;
	printf("%d %d\n", a, b);
	a++; b++;
}

int num = 4;