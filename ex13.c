#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {

	// ���ڿ� ���� ��� ����
	/*char str[30] = "Gwangju Science Academy";
	int i = 0;

	while (str[i] != 0)
		i++;

	printf("���ڿ� \"%s\"�� ���̴� %d �Դϴ�.", str, i);
	printf("���ڿ� \"%s\"�� ���̴� %zd �Դϴ�.", str, strlen(str));*/


	// Ƚ�� �Է� -> OX�Է� -> O�� ������ ������ ��� : O�� 1��, ���ӵǴ� O�� 1���� �߰�. ex) OOO = 6��
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char str[128];
		scanf("%s", str);
		int total = 0, score = 1;
		for (int j = 0; j < strlen(str); j++)
		{
			if (str[j] == 'O') {
				total += score;
				score++;
			}
			else if (str[j] == 'X')
				score = 1;
		}
		printf("%d\n", total);
	}


	/*
	char title[100];
	char lyric[100];
	printf("������ �Է��Ͻÿ�: ");
	gets_s(title, 100);
	printf("���縦 �Է��Ͻÿ�: ");
	gets_s(lyric, 100); // ���ڿ� �Է�
	// scanf("%[^\n]s", str); -> \n�� ������ ������ �Է�
	// ����: %[123] -> %[1-3]�� ����, 1, 2, 3 �� �ƴ� ������ �Է� ����
	puts(title);
	puts(lyric);

	int ch;
	while (1) {
		// ch = getchar(); // �Էµ� ���� ��µȴ�.
		ch = getch(); // �Էµ� ���� ����� ���� �ʴ´�.
		if (ch == 'q') break;
		putch(ch);
	}
	*/

}