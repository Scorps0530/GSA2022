// 탐색 -> 순차탐색, 이진탐색

#include <stdio.h>
#pragma warning(disable:4996)

#define SIZE 16

void binary_search(int arr[], int start, int end, int key);

int main()
{
	int key, i;
	int list[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };

	printf("탐색할 값을 입력하시오: ");
	scanf("%d", &key);

	// 순차탐색
	for (int i = 0; i < SIZE; i++)
		if (list[i] == key)
			printf("탐색 성공 인덱스 = %d\n", i);
	printf("탐색 종료\n");

	// 이진탐색 실행
	binary_search(list, 0, SIZE - 1, key);

	return 0;
}

// 이진탐색
void binary_search(int arr[], int start, int end, int key)
{
	printf("[%d %d]\n", start, end);
	int mid = (start + end) / 2;

	if (arr[mid] == key)
		printf("탐색 결과 = %d", mid);
	else if (key < arr[mid])
		binary_search(arr, start, mid - 1, key);
	else
		binary_search(arr, mid + 1, end, key);
}