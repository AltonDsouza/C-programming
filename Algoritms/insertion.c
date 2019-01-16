//Insertion Sort
#include<stdio.h>
main()
{
	int temp;
	int arr[] = {9,7,6,4,2,10,5,1};
	int len = sizeof(arr)/sizeof(int);
	for(int i = 1; i<len; i++)
	{
		for(int j = 0; j<i; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
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


