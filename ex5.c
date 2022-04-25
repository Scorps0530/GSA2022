#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)

int main() {
	
	// *을 이용한 도형 만들기
	
	// 10x5 직사각형
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++)	printf("*");
		printf("\n");
	}*/

	// 5층 계단
	/*for (int i = 1; i <= 5; i++) {
		
	}*/

	



	// 난수 rand
	// 헤더파일 stdlib.h
	//srand(time(NULL)); // seed rand()
	//for (int a = 0; a < 10; a++) {
	//	printf("%d\n", rand() % 45 + 1);
	//	Sleep(250);
	//	// printf("%d\n", time(NULL)); // 1970년 1월 1일 00:00 기준 1초씩 증가
	//}


	// 가위바위보 게임
	// 가위 : 0, 바위 : 1, 보:2 로 설정
	int pRSP, cRSP;
	
	printf("가위 : 0, 바위 : 1, 보 : 2 중 하나 입력해주세요. >> "); scanf("%d", &pRSP);
	
	srand(time(NULL));
	cRSP = (rand() % 3);
	
	printf("플레이어 : %d, 컴퓨터 : %d\n", pRSP, cRSP);
	switch ((pRSP - cRSP + 3) % 3) { // pRSP - cRSP 가 음수인 경우를 대비해 3을 더해줌
	case 0:
		printf("비겼습니다.\n");
		break;
	case 1:
		printf("이겼습니다.\n");
		break;		
	case 2:
		printf("졌습니다.\n");
		break;
	}


	// 타임워치 -> system("cls"); 콘솔창을 지워주는 함수, Windows.h
	/*int min, sec;
	printf("분초를 입력해주세요.\n( ex. 15 00 -> 15분 0초\n>> "); scanf("%d%d", &min, &sec);
	for (int remain = 60 * min + sec; remain >= 0; remain--) {
		system("cls");
		printf("남은시간 : %d분 %d초\n", remain / 60, remain % 60);
		Sleep(1000);
	}
	printf("끝!!!!\n");*/
}