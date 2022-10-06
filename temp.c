#pragma warning(disable:4996)
#include <stdio.h>

#include <ctype.h> // ���� ó�� ���̺귯��

int count_word(char* s)
{
	int wc = 0, waiting = 1;
	for (int i = 0; s[i] != '\0'; i++)
		if (isalpha(s[i])) // ���ڰ� �ִ°�?
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
	// ���ڿ� �ܾ� ī��Ʈ
	printf("%d\n", count_word("abc ab a a abcd!!"));

	int a;
	while ((a = getchar()) != EOF) // EOF -> Ctrl + Z
	{
		if (islower(a))
			a = toupper(a);
		putchar(a);
	}


	int b = strcmp("dog", "dog"); // 0 ��ȯ
	int c = strcmp("dog", "cat"); // 1 ��ȯ
	int e = strcmp("cat", "dog"); // -1 ��ȯ
	printf("%d %d %d\n", b, c, e);
}