#include <stdio.h>
#pragma warning(disable:4996)

// 정수 n을 매개변수로 전달받아 팩토리얼 값을 반환하는 factorial() 함수 -> long 형

long factorial(int n);
int combination(int n, int r);

int main() {
	int num1, num2;
	printf("두 정수를 입력하세요: "); scanf("%d%d", &num1, &num2);
	printf("%d! = %d\n", num1, factorial(num1));
	printf("%dC%d = %d\n", num1, num2, combination(num1, num2));
}

long factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)	result *= i;
	return result;
}

int	combination(int n, int r)
{
	return factorial(n) / (factorial(n - r) * factorial(r));
}