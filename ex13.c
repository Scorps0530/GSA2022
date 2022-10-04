#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {

	// 문자열 길이 계산 예제
	/*char str[30] = "Gwangju Science Academy";
	int i = 0;

	while (str[i] != 0)
		i++;

	printf("문자열 \"%s\"의 길이는 %d 입니다.", str, i);
	printf("문자열 \"%s\"의 길이는 %zd 입니다.", str, strlen(str));*/


	// 횟수 입력 -> OX입력 -> O의 점수의 총합을 출력 : O는 1점, 연속되는 O은 1점씩 추가. ex) OOO = 6점
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
	printf("제목을 입력하시오: ");
	gets_s(title, 100);
	printf("가사를 입력하시오: ");
	gets_s(lyric, 100); // 문자열 입력
	// scanf("%[^\n]s", str); -> \n이 나오기 전까지 입력
	// 참고: %[123] -> %[1-3]과 같음, 1, 2, 3 이 아닌 곳에서 입력 멈춤
	puts(title);
	puts(lyric);

	int ch;
	while (1) {
		// ch = getchar(); // 입력된 것이 출력된다.
		ch = getch(); // 입력된 것이 출력이 되지 않는다.
		if (ch == 'q') break;
		putch(ch);
	}
	*/

}