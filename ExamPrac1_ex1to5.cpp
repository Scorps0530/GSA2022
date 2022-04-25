#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main() {

	// 입력받은 정수의 각 자리수의 합을 구하는 프로그램
	/*int n, result = 0;
	printf("정수 입력 : "); scanf("%d", &n);
	for (int i = n; i > 0; i = i / 10) result += i % 10;
	printf("%d의 각 자리수의 합은 %d입니다.\n", n, result);*/

	
	// 입력받은 정수의 자리수를 뒤바뀐 정수를 출력하는 프로그램 ex) 1234 -> 4321
	/*int n, result = 0;
	printf("정수 넣어줘~ "); scanf("%d", &n);
	for (int i = n; i > 0; i /= 10) {
		result *= 10;
		result += i % 10;
	}
	printf("%d", result);*/


	// 두 개의 정수를 입력 받아 최대공약수와 최소공배수를 구하는 프로그램
	/*int n1, n2, a, b, r, g, l;
	printf("두 정수를 입력해주세요. "); scanf("%d%d", &n1, &n2);
	a = (n1 > n2) ? n1 : n2; b = (n1 < n2) ? n1 : n2;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	g = a;
	l = (n1 / g) * (n2 / g) * g;
	printf("최대공약수 %d\n최소공배수 %d", g, l);*/


	// n번째 항까지의 피보나치 수열 출력
	/*int n, a=0, b=1, temp;
	printf("몇 항까지 출력할 것인가? "); scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		temp = b;
		b = a + b;
		a = temp;
		printf("%d ", a);
	}*/


	// 로또 번호 출력 프로그램
	/*srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++)	printf("%2d ", rand() % 45 + 1);
		printf("\n");
	}*/
	






	// 피라미드 쌓기

	/*
	*
	**
	***
	****
	*****
	*/
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*
		*
	   **
	  ***
	 ****
	*****
	*/
	/*for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++)
			printf(" ");
		for (int k = 0; k <= i; k++)
			printf("*");
		printf("\n");
	}*/

	// 프로젝트 - 피라미드를 쌓아라
	/*
	SSSS*
	SSS***
	SS*****
	S*******
	*********
	*/
	/*system("mode con:cols=230 lines=80");

	int floor;
	printf("몇 층으로 쌓겠느냐? ");
	scanf("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++)
			printf(" ");
		for (int k = 0; k < i * 2 + 1; k++)
			printf("*");
		printf("\n");
	}*/
		




	int a = 1, b = 1, c = 1;
	a += b += c;
	printf("a:%d b:%d c:%d", a, b, c);

	return 0;
}