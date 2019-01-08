//Merge two unsorted arrays
#include<stdio.h>
#define MAX 10
main()
{
        int arr1[MAX],arr2[MAX],arr[MAX];
        int num,pos,n1,n2,n,index;
        printf("Enter the number of elements of array 1: ");
        scanf("%d",&n1);
        printf("Enter the elements of array1: ");
        for(int i=0;i<n1;i++)
        {
                scanf("%d",&arr1[i]);
        }	

	printf("Enter the number of elements of array 2: ");
        scanf("%d",&n2);
        printf("Enter the elements of array2: ");
        for(int i=0;i<n2;i++)
        {       
                scanf("%d",&arr2[i]);
        }       

	for(int i=0;i<n1;i++)
	{
		arr[i]=arr1[i];
		index++;
	}
	for(int j=0;j<n2;j++)
	{
		arr[index]=arr2[j];
		index++;
	}
	n=n1+n2;
        printf("The elements of the array are: ");
        for(int k=0;k<n;k++)
        {
                printf("%d\t",arr[k]);
        }

	
} 
