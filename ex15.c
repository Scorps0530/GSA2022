#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>	

int main() {
	// �̴� ��� ����

	char question[100] = "new jeans";
	char answer[100] = "___ _____";
	char ch;

	while (1) {
		printf("���ڿ��� �Է��Ͻÿ�: %s\n", answer);
		printf("���ڸ� �����Ͻÿ�: ");
		ch = getchar();
		if (check(question, answer, ch) == 0)
		{
			printf("�����Դϴ�!");
			break;
		}
		getchar(); // �ٹٲ� ���� ����
	}

	return 0;
}

int check(char s[], char a[], char ch)
{
	for (int i = 0; i < strlen(s); i++)
		if (s[i] == ch)
			a[i] = ch;
	/*
	for (int i = 0; i < strlen(s); i++)
		if (s[i] != a[i])
			return 0;
	return 1;
	*/
	return strcmp(s, a);
}