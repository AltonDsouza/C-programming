//Pyramid 6
#include<stdio.h>
main()
{
	int n=4;
	for(int i=1; i<=5; i++)
	{
		for(int space = n; space>=1; space-- )
		{
			printf(" ");
		}

		for(int j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
		n-=1;
	}
	
}
