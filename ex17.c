#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	// 스크린처럼 출력하기
	/*
	char str[] = "Hello, World! ";
	for (int i = 0; i < 100; i++) {

		system("cls");
		for (int j = 0; j < strlen(str); j++)
			printf("%c", str[(j + i) % strlen(str)]);
		Sleep(100);
	}
	*/

	// 문자열 n개 입력 -> 묶음단어 개수 출력하기
	int n; scanf("%d", &n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		char* p = (char*)(malloc(sizeof(char) * 64));
		scanf("%s", p);
		for (int j = 0; j < strlen(p); j++) {
			if (p[j] == p[j + 1]) {
				count++;
				break;
			}
		}
	}
	printf("%d\n", count);
}