//Array of pointers
#include<stdio.h>
#define MAX 3
main()
{
	int var[] = {20, 200, 300};
	int *ptr[MAX];
	for(int i=0; i<MAX; i++)
	{
		ptr[i] = &var[i];
	}

	printf("The values are: \n");
	for(int j=0; j<MAX; j++)
	{
		printf("%d\n",*ptr[j]);
	}
}
