#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a, b;
	printf("���� �ٸ� �� ������ �Է����ּ��� >> ");
	scanf("%d %d", &a, &b);

	printf("�� �� �� �� ū ���� %d�Դϴ�", a>b ? a:b); // a>b�� ���� ��� a�� ��ȯ, ������ ��� b�� ��ȯ
	return 0;
}