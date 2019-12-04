#include <stdio.h>
#include <stdbool.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void printArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void bubbleSort(int arr[], int n)
{
		int i, j;
		bool swapped;
		for(i = 0; i < n - 1; i++){
			swapped = false;
			for(j = 0; j < n - i - 1; j++){
				if(arr[j] > arr[j + 1]){
					swap(&arr[j], &arr[j + 1]);
					swapped = true;					
				}
			}
			if(swapped == false){
				break;
			}
		}
}

int main()
{
	int arr[] = {45, 6, 3, -9, 0, 333};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Unsorted array: \n");
	printArray(arr, n);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}