#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#pragma warning(disable:4996)

#define DIGITS 3

void set_question(int pArray[]);
void check_overlap(int pArray[], int index);
void input_answer(int pArray[]);
void check_result(int pQuestion[], int pAnswer[]);
void print_result(int ball, int strike);
void print_question(int pArray[]);

int main() {
	srand(time(NULL));

	int question[DIGITS] = { 0, };	for (int i = 0; i < DIGITS; i++) question[i] -= 1; // 각 요소를 -1로 초기화
	int answer[DIGITS] = { 0, };
	int life = 9, inning = 1;

	set_question(question);
	//print_question(question);
	//printf("\n");

	printf("**1학년 5반 11번 이지명**\n");
	printf("****야구 게임 시작!!****\n");

	while (inning <= life)
	{
		printf("[%d회] %d개의 숫자 선택 : ", inning, DIGITS);
		input_answer(answer);
		check_result(question, answer);
		inning++;
	}

	printf("당신은 졌습니다.\n정답은 ");
	print_question(question);
	printf("입니다.");
}


void set_question(int pArray[])
{
	for (int i = 0; i < DIGITS; i++) {
		pArray[i] = rand() % 10;		// 난수 생성
		check_overlap(pArray, i);		// 중복된 수 있는지 확인
	}
}

void check_overlap(int pArray[], int index)
{
	for (int i = 0; i < DIGITS; i++)
	{
		// 전체배열에서 같은 값이 있는지 확인. 단, 자기자신은 제외
		if (pArray[index] == pArray[i] && index != i)
		{
			pArray[index] = rand() % 10 + 1;
			check_overlap(pArray, index); // 재귀호출
		}
	}
}

void input_answer(int pArray[])
{
	for (int i = 0; i < DIGITS; i++)
		scanf("%d", &pArray[i]);
}

void check_result(int pQuestion[], int pAnswer[])
{
	int ball = 0;
	int strike = 0;

	for (int i = 0; i < DIGITS; i++)
	{
		if (pQuestion[i] == pAnswer[i])	strike++;
		for (int j = 0; j < DIGITS; j++)
			if ((i != j) && (pQuestion[i] == pAnswer[j]))	ball++;
	}

	print_result(ball, strike);
}

void print_result(int ball, int strike)
{
	if (strike == DIGITS) { printf("당신은 이겼습니다.\n"); exit(0); }
	else printf("스트라이크 : %d / 볼 : %d\n", strike, ball);
}

void print_question(int pArray[])
{
	for (int i = 0; i < DIGITS; i++)
		printf("%d ", pArray[i]);
}