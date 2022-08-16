#pragma warning(disable:4996)

#include <stdio.h>

void F(int a, int b)
{
	if (a == 1)
	{
		printf("*");
		return;
	}
	else if (b == 1)
	{
		F(a - 1, a - 1);
		printf("\n");
	}
	else
	{
		F(a, b - 1);
	}
	printf("*");
}

int main()
{
	int n;
	scanf("%d", &n);
	F(n, n);
	return 0;
}