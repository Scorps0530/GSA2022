// 함수, 재귀함수

#include <stdio.h>
#pragma warning(disable:4996)


/*
// 별을 출력하는 프로그램
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



// 정수 n을 매개변수로 전달받아 팩토리얼 값을 반환하는 factorial() 함수

/*
double factorial(int n);
int combination(int n, int r);

int main() {
	int n, r;
	printf("nCr : 두 정수 n, r을 입력하세요 >> "); scanf("%d%d", &n, &r);
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
// 소수 판단 프로그램
int input_int();

int main() {
	int n = input_int();
	printf("%d는 소수가 ", n);
	switch (prime(n))
	{
	case 0:
		printf("아닙니다.\n");
		break;
	case 1:
		printf("맞습니다.\n");
		break;
	}
}

int input_int()
{
	int x;
	printf("정수를 입력하시오: ");
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
// 하노이탑

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)	printf("원판 1을 %c에서 %c로 옮긴다.\n", from, to);		// n이 1일 경우, 단지 원판 1을 옮기면 된다
	else {																	// n이 2 이상일 때
		hanoi_tower(n - 1, from, to, tmp);									// tmp에 n-1층 하노이 탑을 쌓음
		printf("원판 %d를 %c에서 %c로 옮긴다\n", n, from, to);			// to에 원판 n을 하노이 탑에 놓음
		hanoi_tower(n - 1, tmp, from, to);									// to의 원판 n위에 tmp에 있던 n-1층 하노이 탑을 쌓음
	}
}

int main() {
	int n; printf("몇 층 하노이탑이냐? "); scanf("%d", &n);
	hanoi_tower(n, 'A', 'B', 'C');
}
*/



/*
// 2진수 변환

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