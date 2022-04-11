#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a, b;
	printf("서로 다른 두 정수를 입력해주세요 >> ");
	scanf("%d %d", &a, &b);

	printf("두 수 중 더 큰 수는 %d입니다", a>b ? a:b); // a>b가 참일 경우 a를 반환, 거짓인 경우 b를 반환
	return 0;
}