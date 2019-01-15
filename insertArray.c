//Program to insert an element in an array
#include<stdio.h>
#define MAX 10
main()
{ 
	int pos, num;
	int arr[] = {10, 34, 56, 67, 78};
	int n = sizeof(arr)/sizeof(int);
	printf("Enter the position at which you want to insert the data: ");
	scanf("%d",&pos);
	printf("Enter the number: ");
	scanf("%d",&num);
	int j = n-1;
	while(pos <= j)
	{
		//Shifting elements to the right
		arr[j+1] = arr[j];
		j--;
	}
	arr[pos] = num;
	n = n+1;
	printf("Elements of the array are:\n");
	for(int i = 0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
