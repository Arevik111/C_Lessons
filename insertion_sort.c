// C program for insertion sort 
#include <stdio.h> 

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
	int i, j, key;
	for(i = 1; i < n; i++){
		key = arr[i];
		j = i;
		while(j > 0 && arr[j - 1] > key){
			arr[j] = arr[j - 1];
			j = j - 1;
		}
		arr[j] = key;
	}
}


// A utility function to print an array of size n 
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

/* Driver program to test insertion sort */
int main() 
{ 
	int arr[] = { 12, 11, 13, 5, 6 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	printf("Unsorted array\n");
	printArray(arr, n); 
	insertionSort(arr, n); 
	printf("Sorted array\n");
	printArray(arr, n); 
	return 0; 
} 
