// Ž�� -> ����Ž��, ����Ž��

#include <stdio.h>
#pragma warning(disable:4996)

#define SIZE 16

void binary_search(int arr[], int start, int end, int key);

int main()
{
	int key, i;
	int list[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };

	printf("Ž���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &key);

	// ����Ž��
	for (int i = 0; i < SIZE; i++)
		if (list[i] == key)
			printf("Ž�� ���� �ε��� = %d\n", i);
	printf("Ž�� ����\n");

	// ����Ž�� ����
	binary_search(list, 0, SIZE - 1, key);

	return 0;
}

// ����Ž��
void binary_search(int arr[], int start, int end, int key)
{
	printf("[%d %d]\n", start, end);
	int mid = (start + end) / 2;

	if (arr[mid] == key)
		printf("Ž�� ��� = %d", mid);
	else if (key < arr[mid])
		binary_search(arr, start, mid - 1, key);
	else
		binary_search(arr, mid + 1, end, key);
}