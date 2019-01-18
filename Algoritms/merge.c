//Merge sort
#include<stdio.h>
#define MAX 100

void merge_sort(int arr[], int, int);
void merge(int arr[], int, int, int);

main()
{
	int arr[] = {9, 39, 45, 81, 18, 27, 72, 90};
	int n = sizeof(arr)/sizeof(int);
	merge_sort(arr, 0, n-1);
	printf("The sorted array is: \n");
	for(int i = 0; i<n; i++)
	{
		printf("\t%d",arr[i]);
	}
	printf("\n");
}

void merge(int arr[], int beg , int mid, int end)
{
	int temp[MAX];
        int index = beg, i, j;
	i = beg;
	j = mid+1;
        while((i<=mid) && (j<=end))
        {
                if(arr[i] < arr[j])
                {
                        temp[index] = arr[i];
                        i++;
                }
                else
                {
                        temp[index] = arr[j];
                        j++;
                }
		index++;
        }
	//if any elements from the right subarray is left out
	if(i>mid)
	{
		while(j<=end)
		{
			temp[index] = arr[j];
			index++;
			j++;
		}
	}	
	else
	{
		while(i<=mid)
		{
			temp[index] = arr[i];
			index++;
			i++;
		}
	}

	for(int i = 0; i < index; i++)
		arr[i] = temp[i];

}

void merge_sort(int arr[], int beg, int end)
{
	int mid;
	if(beg < end)
	{
		mid = (beg+end)/2;
		merge_sort(arr, beg, mid);
		merge_sort(arr, mid+1, end);
		merge(arr, beg, mid, end);
	}
}
