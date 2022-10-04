#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void shift_str(char[]);

int main() {
	// 문자열을 입력 받고 숫자를 입력 받아 입력 받은 숫자만큼 왼쪽으로 한칸 씩 이동

	char string[100];
	int shift;

	scanf("%s", string);
	scanf("%d", &shift);

	for (int i = 0; i < shift; i++)
		shift_str(string);
	printf("%s\n", string);

	return 0;
}

void shift_str(char* p)
{
	for (int i = 0; i < strlen(p) - 1; i++)
	{
		char tmp = p[i];
		p[i] = p[i + 1];
		p[i + 1] = tmp;
	}
}