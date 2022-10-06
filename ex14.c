#pragma warning(disable:4996)
#include <stdio.h>

#include <ctype.h> // 문자 처리 라이브러리

int count_word(char* s)
{
	int wc = 0, waiting = 1;
	for (int i = 0; s[i] != '\0'; i++)
		if (isalpha(s[i])) // 문자가 있는가?
		{
			if (waiting)
			{
				wc++;
				waiting = 0;
			}
		}
		else
			waiting = 1;
	return wc;
}

int main() {
	// 문자열 단어 카운트
	printf("%d\n", count_word("abc ab a a abcd!!"));

	int a;
	while ((a = getchar()) != EOF) // EOF -> Ctrl + Z
	{
		if (islower(a))
			a = toupper(a);
		putchar(a);
	}


	int b = strcmp("dog", "dog"); // 0 반환
	int c = strcmp("dog", "cat"); // 1 반환
	int e = strcmp("cat", "dog"); // -1 반환
	printf("%d %d %d\n", b, c, e);
}