#include <stdbool.h>
#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	/*int num;
	printf("���ڸ� �Է����ּ��� >> ");
	scanf("%d", &num);

	int i = 1;
	while (i <= 9) {
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}*/


	/*int num, result = 0;
	printf("������ �Է��Ͻÿ� >> ");
	scanf("%d", &num);
	int i = 1;
	while (i <= num) {
		result += i;	
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", num, result);*/


	// �ִ����� ã��
	/*int num1, num2, a, b, r;
	printf("�� ������ �Է��Ͻÿ� >> ");
	scanf("%d %d", &num1, &num2);
	a = num1 > num2 ? num1 : num2; b = num1 < num2 ? num1 : num2;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	printf("�ִ������� %d�Դϴ�.\n", a);*/


	// ���� ��� ���α׷�
	/*float score = 0, count = 0, result = 0;
	printf("----------------------------------------\n* ���� ��� ���α׷� *\n----------------------------------------\n���� �Է� ����� ������ �Է��Ͻÿ�(ex. -1)\n----------------------------------------\n");
	while(true) {
		printf("������ �Է��Ͻÿ� : ");
		scanf("%f", &score);
		if (score >= 0) {
			result += score;
			count++;
		}
		else break;
	}
	printf("\n������ ����� %f�Դϴ�.", result / count);*/


	// ���丮�� ���α׷�
	/*int num, result;
	printf("������ �Է��Ͻÿ� >> "); scanf("%d", &num);
	for (int i = 1, result=1; i <= num; i++) result *= i;
	printf("%d! = %d", num, result);*/

	
	// 1�� vs 1��*2�� 30��
	double result, temp;
	int i, j;
	for (result = 0, i = 1; i <= 30; i++) {
		for (temp = 1, j = 1; j < i; j++) temp *= 2;
		result += temp;
		printf("%d���� �� �հ� %.f\n", i, result);
	}
	printf("%.f - 1�� = %.f", result, result - 1e+8);
}	