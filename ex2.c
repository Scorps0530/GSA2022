#include <stdbool.h>
#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	/*int num;
	printf("숫자를 입력해주세요 >> ");
	scanf("%d", &num);

	int i = 1;
	while (i <= 9) {
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}*/


	/*int num, result = 0;
	printf("정수를 입력하시오 >> ");
	scanf("%d", &num);
	int i = 1;
	while (i <= num) {
		result += i;	
		i++;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", num, result);*/


	// 최대공약수 찾기
	/*int num1, num2, a, b, r;
	printf("두 정수를 입력하시오 >> ");
	scanf("%d %d", &num1, &num2);
	a = num1 > num2 ? num1 : num2; b = num1 < num2 ? num1 : num2;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	printf("최대공약수는 %d입니다.\n", a);*/


	// 성적 평균 프로그램
	/*float score = 0, count = 0, result = 0;
	printf("----------------------------------------\n* 성적 평균 프로그램 *\n----------------------------------------\n성적 입력 종료는 음수를 입력하시오(ex. -1)\n----------------------------------------\n");
	while(true) {
		printf("성적을 입력하시오 : ");
		scanf("%f", &score);
		if (score >= 0) {
			result += score;
			count++;
		}
		else break;
	}
	printf("\n성적의 평균은 %f입니다.", result / count);*/


	// 팩토리얼 프로그램
	/*int num, result;
	printf("정수를 입력하시오 >> "); scanf("%d", &num);
	for (int i = 1, result=1; i <= num; i++) result *= i;
	printf("%d! = %d", num, result);*/

	
	// 1억 vs 1원*2배 30일
	double result, temp;
	int i, j;
	for (result = 0, i = 1; i <= 30; i++) {
		for (temp = 1, j = 1; j < i; j++) temp *= 2;
		result += temp;
		printf("%d일차 돈 합계 %.f\n", i, result);
	}
	printf("%.f - 1억 = %.f", result, result - 1e+8);
}	