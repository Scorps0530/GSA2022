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

	int question[DIGITS] = { 0, };	for (int i = 0; i < DIGITS; i++) question[i] -= 1; // �� ��Ҹ� -1�� �ʱ�ȭ
	int answer[DIGITS] = { 0, };
	int life = 9, inning = 1;

	set_question(question);
	//print_question(question);
	//printf("\n");

	printf("**1�г� 5�� 11�� ������**\n");
	printf("****�߱� ���� ����!!****\n");

	while (inning <= life)
	{
		printf("[%dȸ] %d���� ���� ���� : ", inning, DIGITS);
		input_answer(answer);
		check_result(question, answer);
		inning++;
	}

	printf("����� �����ϴ�.\n������ ");
	print_question(question);
	printf("�Դϴ�.");
}


void set_question(int pArray[])
{
	for (int i = 0; i < DIGITS; i++) {
		pArray[i] = rand() % 10;		// ���� ����
		check_overlap(pArray, i);		// �ߺ��� �� �ִ��� Ȯ��
	}
}

void check_overlap(int pArray[], int index)
{
	for (int i = 0; i < DIGITS; i++)
	{
		// ��ü�迭���� ���� ���� �ִ��� Ȯ��. ��, �ڱ��ڽ��� ����
		if (pArray[index] == pArray[i] && index != i)
		{
			pArray[index] = rand() % 10 + 1;
			check_overlap(pArray, index); // ���ȣ��
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
	if (strike == DIGITS) { printf("����� �̰���ϴ�.\n"); exit(0); }
	else printf("��Ʈ����ũ : %d / �� : %d\n", strike, ball);
}

void print_question(int pArray[])
{
	for (int i = 0; i < DIGITS; i++)
		printf("%d ", pArray[i]);
}