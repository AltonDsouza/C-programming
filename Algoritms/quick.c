//Quick Sort
#include<stdio.h>

int partition(int arr[], int, int);
void quick_sort(int arr[], int, int);

main()
{
	int arr[] = {27, 10, 36, 18, 25, 45};
	int n = sizeof(arr)/sizeof(int);
	quick_sort(arr, 0, n-1);
	printf("The sorted array is:\n");
	for(int i = 0; i<n; i++)
		printf("\t%d",arr[i]);
	printf("\n");
}

int partition(int arr[], int beg, int end)
{
	int temp, flag;
	int left = beg;
	int loc = beg;//Selecting element at index 0 as pivot
	int right = end;
	while(flag != 1)
	{
		while(arr[loc] < arr[right])
			right--;
		if(loc == right)//Pivot is placed in position
			flag = 1;
		else if(arr[loc] > arr[right])
		{
			temp = arr[loc];
			arr[loc] = arr[right];
			arr[right] = temp;
			loc = right;
		}
		if(flag!=1)
		{
			while(arr[loc] > arr[left])
				left++;
			if(loc == left)//Pivot is placed in position
				flag = 1;
			else if(arr[loc] < arr[left])
			{
				temp = arr[loc];
				arr[loc] = arr[left];
				arr[left] = temp;
				loc = left;
			}
		}
	}
	return loc;
}

void quick_sort(int arr[], int beg, int end)
{
	int loc;
	if(beg < end)
	{	
		loc = partition(arr, beg, end);
		quick_sort(arr, beg, loc-1);
		quick_sort(arr, loc+1,end);
	}
}
