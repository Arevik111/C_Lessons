#include <stdio.h>


int main()
{
	int arr[100] = {2, 45, 7, 0, -3};
	int n = 5;
	int j = 1;
	
	//access
	printf("This is operation Access.arr[j] = %d\n", arr[j]);
	
	//search
	j = 0;
	int item = -3;
	while(j < n)
	{
		if(arr[j] == item)
		{
			printf("This is operation search, j = %d\n", j);
			break;
		}
		j++;
	}
	//insertion item in array
	
	//print array before insertion
	printf("Array before insertion: ");
	for(int j = 0; j < n+ 1; j++){
		printf("%d ", arr[j]);
	}
	printf("\n");
	
	//insertion item
	int k = 4, elem = 99;
	n = n + 1;
	while(j >= k)
	{
		arr[j + 1] = arr[j];
		j = j - 1;
	}
	arr[k] = elem;
	//print array after insertion
	printf("Array after insertion: ");
	for(int j = 0; j < n; j++){
		printf("%d ", arr[j]);
	}
	printf("\n");
	printf("%d\n", k);
	//deletion
	k = 1;
	j = k;
	while(j < n)
	{
		arr[j - 1] = arr[j];
		j = j + 1;
	}
	n = n - 1;
	printf("Array after deletion: ");
	for(int j = 0; j < n; j++){
		printf("%d ", arr[j]);
	}
	
}