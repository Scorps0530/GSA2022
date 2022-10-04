#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>	

int main() {
	// 미니 행맨 게임

	char question[100] = "new jeans";
	char answer[100] = "___ _____";
	char ch;

	while (1) {
		printf("문자열을 입력하시오: %s\n", answer);
		printf("글자를 추측하시오: ");
		ch = getchar();
		if (check(question, answer, ch) == 0)
		{
			printf("정답입니다!");
			break;
		}
		getchar(); // 줄바꿈 문자 제거
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