//Bubble sort
#include<stdio.h>
main()
{
	int temp;
	int arr[] = {20,10,4,7,2,1,21};
	int len = sizeof(arr)/sizeof(int);
	//Logic
	for(int i = 0; i<len; i++)
	{
		//Pass a(integer) involves (n-a) comparisons
		for(int j = 0; j<len-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				//Swap
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("The sorted array is:");
	for(int i = 0; i<len; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
