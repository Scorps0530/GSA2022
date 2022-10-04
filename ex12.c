#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h> // strcpy
#include <stdlib.h> // malloc

int main() {
	char s1[] = "Hello, World!"; // { 'H','e','l','l','o',' ','W','o','r','l','d','\0' }
	char* s2  = "Hello, World!"; // -> �����͸� ����� ���ڿ��� ������ ���, ���ڿ� ������ ��ҵ��� ������ �� ����.
	// why? C��� �����Ϸ��� ���ڿ� �����Ϳ� �Ҵ�� ���ڿ� ���ͳ��� �б� ���� ������ ����(������ ���׸�Ʈ)�� �Ҵ��ϱ� ����.
	printf("%s\n", s1);
	printf("%s\n", s2);

	// ���ڿ� ���� -> strcpy(����ڿ�, �������ڿ�)
	char s3[100];
	strcpy(s3, s1);
	printf("%s\n", s3);

	// ���ڿ� ���� - ������
	// memory allocation -> malloc
	// �޸� ���� �Ҵ�
	char* s4 = (char*)malloc(sizeof(char) * 20); // �����ͷ� ���ǵ� ���ڿ��� �б� ����. char* s2 �� strcpy �ϸ� ����.
	strcpy(s4, s2);
	printf("%s\n", s4);
	free(s4);

	// ���ڿ� ���̱� -> strcat() (string concatenation)
	char s5[20] = "Hello, ", s6[] = "World!";
	strcat(s5, s6); // char* strcat(char* desk, char* origin) desk�� origin�� ����
	printf("%s\n", s5);

	// ���ڿ� ���̱� - ������
	char* s7 = (char*)malloc(sizeof(char) * 20);
	strcpy(s7, "Hello, ");
	char* s8 = "World!";
	strcat(s7, s8);
	printf("%s\n", s7);

}