//Program to merge two sorted arrays
#include<stdio.h>
#define MAX 10
main()
{
        int arr1[MAX],arr2[MAX],arr[MAX];
        int num,pos,n1,n2,n,index_first=0, index_second=0, index=0;
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

	while(index_first<n1 && index_second<n2)
	{
		if(arr1[index_first] < arr2[index_second])
		{
			arr[index]=arr1[index_first];
			index_first++;
		}
		else
		{
			arr[index]=arr2[index_second];
			index_second++;
		}
		index++;
	}

	//when array2 is empty 
	if(index_second==n2)
	{
		while(index_first<n1)
		{
			arr[index]=arr1[index_first];
			index++;
			index_first++;
		}
	}
	
	//When array1 is empty
	 if(index_first==n1)
        {
                while(index_second<n2)
                {
                        arr[index]=arr2[index_second];
                        index++;
                        index_second++;
                }
        }

	 n=n1+n2;
	 for(int k=0;k<n;k++)
	 {
		printf("%d\t",arr[k]);
	 }

}

