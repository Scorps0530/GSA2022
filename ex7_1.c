#include <stdio.h>

/*
// static -> 정적 변수
// auto -> 동적 변수. 지역 변수에서는 선언할 때 auto가 생략되어 있음
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



// extern -> 외부 참조
extern sub();
extern num;

int main() {
	sub();
	sub();
	sub();
	printf("num = %d", num);
}
