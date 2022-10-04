#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h> // strcpy
#include <stdlib.h> // malloc

int main() {
	char s1[] = "Hello, World!"; // { 'H','e','l','l','o',' ','W','o','r','l','d','\0' }
	char* s2  = "Hello, World!"; // -> 포인터를 사용해 문자열을 정의한 경우, 문자열 각각의 요소들을 수정할 수 없다.
	// why? C언어 컴파일러는 문자열 포인터에 할당된 문자열 리터널을 읽기 전용 데이터 섹션(데이터 세그먼트)에 할당하기 때문.
	printf("%s\n", s1);
	printf("%s\n", s2);

	// 문자열 복사 -> strcpy(대상문자열, 원본문자열)
	char s3[100];
	strcpy(s3, s1);
	printf("%s\n", s3);

	// 문자열 복사 - 포인터
	// memory allocation -> malloc
	// 메모리 동적 할당
	char* s4 = (char*)malloc(sizeof(char) * 20); // 포인터로 정의된 문자열은 읽기 전용. char* s2 후 strcpy 하면 오류.
	strcpy(s4, s2);
	printf("%s\n", s4);
	free(s4);

	// 문자열 붙이기 -> strcat() (string concatenation)
	char s5[20] = "Hello, ", s6[] = "World!";
	strcat(s5, s6); // char* strcat(char* desk, char* origin) desk에 origin을 붙임
	printf("%s\n", s5);

	// 문자열 붙이기 - 포인터
	char* s7 = (char*)malloc(sizeof(char) * 20);
	strcpy(s7, "Hello, ");
	char* s8 = "World!";
	strcat(s7, s8);
	printf("%s\n", s7);

}