// �Լ�, ����Լ�

#include <stdio.h>
#pragma warning(disable:4996)


/*
// ���� ����ϴ� ���α׷�
void print_stars(int n);

int main() {
	int x; scanf("%d", &x);
	print_stars(x);

	return 0;
}

void print_stars(int n) {
	for (int i = 0; i < n; i++)	printf("*");
	printf("\n");
}
*/



// ���� n�� �Ű������� ���޹޾� ���丮�� ���� ��ȯ�ϴ� factorial() �Լ�

/*
double factorial(int n);
int combination(int n, int r);

int main() {
	int n, r;
	printf("nCr : �� ���� n, r�� �Է��ϼ��� >> "); scanf("%d%d", &n, &r);
	printf("%d! = %.f\n", n, factorial(n));
	printf("%dC%d = %d\n", n, r, combination(n, r));
}

double factorial(int n)
{
	
	//double result = 1;
	//for (int i = 1; i <= n; i++)	result *= i;
	//return result;
	if (n <= 1)	return 1;
	else return (n * factorial(n - 1));
}

int	combination(int n, int r)
{
	return (int)((factorial(n) / factorial(n - r)) / factorial(r));
}
*/


/*
// �Ҽ� �Ǵ� ���α׷�
int input_int();

int main() {
	int n = input_int();
	printf("%d�� �Ҽ��� ", n);
	switch (prime(n))
	{
	case 0:
		printf("�ƴմϴ�.\n");
		break;
	case 1:
		printf("�½��ϴ�.\n");
		break;
	}
}

int input_int()
{
	int x;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	return x;
}

int prime(int x) {
	if (x <= 1)	return 0;
	else {
		for (int i = 2; i < x; i++) 
			if (x % i == 0) return 0;
		return 1;
	}
	
}
*/


/*
// �ϳ���ž

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)	printf("���� 1�� %c���� %c�� �ű��.\n", from, to);		// n�� 1�� ���, ���� ���� 1�� �ű�� �ȴ�
	else {																	// n�� 2 �̻��� ��
		hanoi_tower(n - 1, from, to, tmp);									// tmp�� n-1�� �ϳ��� ž�� ����
		printf("���� %d�� %c���� %c�� �ű��\n", n, from, to);			// to�� ���� n�� �ϳ��� ž�� ����
		hanoi_tower(n - 1, tmp, from, to);									// to�� ���� n���� tmp�� �ִ� n-1�� �ϳ��� ž�� ����
	}
}

int main() {
	int n; printf("�� �� �ϳ���ž�̳�? "); scanf("%d", &n);
	hanoi_tower(n, 'A', 'B', 'C');
}
*/



/*
// 2���� ��ȯ

void print_binary(int n)
{
	//if (n == 0)	return;
	//else
	//{
	//	print_binary(n / 2);
	//	printf("%d", n % 2);
	//}
	
	if(n>!)
	{
		print_binary(n/2);
	}
	printf("%d", n%2);
}

int main() {
	int n; printf("n = "); scanf("%d", &n);
	printf("%d = ", n);
	print_binary(n);
	printf("(2)");
}
*/