#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)

int main() {
	
	// *�� �̿��� ���� �����
	
	// 10x5 ���簢��
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++)	printf("*");
		printf("\n");
	}*/

	// 5�� ���
	/*for (int i = 1; i <= 5; i++) {
		
	}*/

	



	// ���� rand
	// ������� stdlib.h
	//srand(time(NULL)); // seed rand()
	//for (int a = 0; a < 10; a++) {
	//	printf("%d\n", rand() % 45 + 1);
	//	Sleep(250);
	//	// printf("%d\n", time(NULL)); // 1970�� 1�� 1�� 00:00 ���� 1�ʾ� ����
	//}


	// ���������� ����
	// ���� : 0, ���� : 1, ��:2 �� ����
	int pRSP, cRSP;
	
	printf("���� : 0, ���� : 1, �� : 2 �� �ϳ� �Է����ּ���. >> "); scanf("%d", &pRSP);
	
	srand(time(NULL));
	cRSP = (rand() % 3);
	
	printf("�÷��̾� : %d, ��ǻ�� : %d\n", pRSP, cRSP);
	switch ((pRSP - cRSP + 3) % 3) { // pRSP - cRSP �� ������ ��츦 ����� 3�� ������
	case 0:
		printf("�����ϴ�.\n");
		break;
	case 1:
		printf("�̰���ϴ�.\n");
		break;		
	case 2:
		printf("�����ϴ�.\n");
		break;
	}


	// Ÿ�ӿ�ġ -> system("cls"); �ܼ�â�� �����ִ� �Լ�, Windows.h
	/*int min, sec;
	printf("���ʸ� �Է����ּ���.\n( ex. 15 00 -> 15�� 0��\n>> "); scanf("%d%d", &min, &sec);
	for (int remain = 60 * min + sec; remain >= 0; remain--) {
		system("cls");
		printf("�����ð� : %d�� %d��\n", remain / 60, remain % 60);
		Sleep(1000);
	}
	printf("��!!!!\n");*/
}