// 틱택토 ( 출력만 하는거 ) with. 이차원배열

#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>

#define WIDTH 3
#define LEIGHT 3

void print_board(char board[][LEIGHT]);

int main() {
	char board[WIDTH][LEIGHT] = { {0,}, {0, }, {0,} };
	for (int i = 0; i < WIDTH; i++)
		for (int j = 0; j < WIDTH; j++)
			board[i][j] = ' ';

	int turn = 1;
	char key = 'O';

	print_board(board);

	while (1) {
		int x, y;
		printf("(x,y) = ");
		scanf("%d%d", &x, &y);
		board[y][x] = (turn % 2 == 1) ? 'O' : 'X';

		system("cls");
		print_board(board);

		turn++;
	}


}

void print_board(char board[][LEIGHT]) {
	for (int i = 0; i < WIDTH; i++) {
		printf("---|---|---\n");
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
	}
}