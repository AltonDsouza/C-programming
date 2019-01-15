//Binary Search Algorithm
#include<stdio.h>
main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int num, pos = -1, mid;
	int n = sizeof(arr)/sizeof(int);
	printf("Enter the number to be searched:");
	scanf("%d",&num);
	int lo = 0;
	int hi = n-1;

	while(lo <= hi)
	{
		mid = (lo+hi)/2;
		//Search in the left half
		if(num < arr[mid])
		{
			hi = mid -1;
		}
		else if(num == arr[mid])
		{
			pos = mid;
			printf("%d is stored at position %d\n",num,pos);
			break;
		}
		/*Search in the right half
		 *if(num > arr[mid])
		 {
		 	lo = mid +1;
		 }
		 */
		else
		{
			lo = mid + 1;
		}
	}

	//If number is not present
	if(pos == -1)
	{
		printf("The number is not present in the list.\n");
	}
}
