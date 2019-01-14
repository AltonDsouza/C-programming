//Linear Search
#include<stdio.h>
#define MAX 7
main()
{
	int arr[MAX] = {6, 2, 5, 8, 9, 1, 3};
	int pos = -1, num;
	printf("Enter the number to be searched:");
	scanf("%d",&num);

/*	Using for loop
 	for(int i = 0; i<MAX; i++)
	{
		if(arr[i] == num)
		{
			pos = i;
			printf("The number %d is at position %d\n",num,pos);
		}
	}
*/

/*	Using while loop
 	int i = 0;
	while(i<MAX)
	{
		 if(arr[i] == num)
                {
                        pos = i;
                        printf("The number %d is at position %d\n",num,pos);
                }

		i++;
	}
*/
	if(pos == -1)
	{
		printf("The number you entered is not present\n");
	}
	
}
