#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main() {

	// �Է¹��� ������ �� �ڸ����� ���� ���ϴ� ���α׷�
	/*int n, result = 0;
	printf("���� �Է� : "); scanf("%d", &n);
	for (int i = n; i > 0; i = i / 10) result += i % 10;
	printf("%d�� �� �ڸ����� ���� %d�Դϴ�.\n", n, result);*/

	
	// �Է¹��� ������ �ڸ����� �ڹٲ� ������ ����ϴ� ���α׷� ex) 1234 -> 4321
	/*int n, result = 0;
	printf("���� �־���~ "); scanf("%d", &n);
	for (int i = n; i > 0; i /= 10) {
		result *= 10;
		result += i % 10;
	}
	printf("%d", result);*/


	// �� ���� ������ �Է� �޾� �ִ������� �ּҰ������ ���ϴ� ���α׷�
	/*int n1, n2, a, b, r, g, l;
	printf("�� ������ �Է����ּ���. "); scanf("%d%d", &n1, &n2);
	a = (n1 > n2) ? n1 : n2; b = (n1 < n2) ? n1 : n2;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	g = a;
	l = (n1 / g) * (n2 / g) * g;
	printf("�ִ����� %d\n�ּҰ���� %d", g, l);*/


	// n��° �ױ����� �Ǻ���ġ ���� ���
	/*int n, a=0, b=1, temp;
	printf("�� �ױ��� ����� ���ΰ�? "); scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		temp = b;
		b = a + b;
		a = temp;
		printf("%d ", a);
	}*/


	// �ζ� ��ȣ ��� ���α׷�
	/*srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++)	printf("%2d ", rand() % 45 + 1);
		printf("\n");
	}*/
	






	// �Ƕ�̵� �ױ�

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

	// ������Ʈ - �Ƕ�̵带 �׾ƶ�
	/*
	SSSS*
	SSS***
	SS*****
	S*******
	*********
	*/
	/*system("mode con:cols=230 lines=80");

	int floor;
	printf("�� ������ �װڴ���? ");
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