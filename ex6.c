#include <stdio.h>
#pragma warning(disable:4996)

// ���� n�� �Ű������� ���޹޾� ���丮�� ���� ��ȯ�ϴ� factorial() �Լ� -> long ��

long factorial(int n);
int combination(int n, int r);

int main() {
	int num1, num2;
	printf("�� ������ �Է��ϼ���: "); scanf("%d%d", &num1, &num2);
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