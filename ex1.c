// �Ž����� ��� ���α׷�

#pragma warning(disable:4996)
#include <stdio.h>

void main() {
	int price, pay, change;

	printf("���ǰ� �Է� : ");
	scanf("%d", &price);
	printf("���� �� �� �Է� : ");
	scanf("%d", &pay);

	change = pay - price;
	printf("������ : %d��\n", change / 10000);
	printf("��õ���� : %d��\n", change % 10000 / 5000);
	printf("õ���� : %d��\n", change % 5000 / 1000);
	printf("������� : %d��\n", change % 1000 / 500);
	printf("����� : %d��\n", change % 500 / 100);
}