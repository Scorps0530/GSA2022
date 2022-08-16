// 정렬 -> selection sort, bubble sort,	insertion sort, shell sort

#pragma warning(disable:4996)

#include <stdio.h>

#define SIZE 5

void selection_sort(int arr[], int size);
void bubble_sort(int arr[], int size);
void insertion_sort(int arr[], int size);
void print_array(int arr[], int size);

void main() {
	int a[SIZE] = { 1, 4, 5, 3, 2 };
	//selection_sort(a, SIZE);
	//bubble_sort(a, SIZE);
	insertion_sort(a, SIZE);
	print_array(a, SIZE);
}


// 정렬

// 선택 정렬
void selection_sort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int least = i;
		for (int j = i; j < size; j++)
			if (arr[j] < arr[least])
				least = j;
		int temp = arr[i];
		arr[i] = arr[least];
		arr[least] = temp;

		print_array(arr, size);
		printf("\n");
	}
}

// 버블 정렬
void bubble_sort(int arr[], int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			print_array(arr, size);
			printf("\n");
		}
		printf("\n");
	}
}

// 삽입 정렬
void insertion_sort(int arr[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int j;
		int key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--)
		{
			arr[j + 1] = arr[j];

			print_array(arr, size);
			printf("\n");
		}
		arr[j + 1] = key;

		print_array(arr, size);
		printf("\n\n");
	}
}

void print_array(int array[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", array[i]);
}