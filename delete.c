//Program to delete an element from the array
#include<stdio.h> 
main()
{
	int pos, num;
        int arr[] = {10, 34, 56, 67, 78};
        int n = sizeof(arr)/sizeof(int);
        printf("Enter the number you want to delete: ");
        scanf("%d",&num);
        int j = n-1;
        for(int i = 0; i<n; i++)
	{
		if(arr[i] == num)
		{
			pos = i;
			while(pos < j)
        		{
                	//Shifting elements to the left
                	arr[pos] = arr[pos+1];
                	pos++;
        		}
		}
	}
        n = n-1;
        printf("Elements of the array are:\n");
        for(int i = 0; i<n; i++)
        {
                printf("%d ",arr[i]);
        }
        printf("\n");

}
