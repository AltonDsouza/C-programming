//Pyramid 4
#include<stdio.h>
main()
{
	int n=1;
	for(int i=1; i<=5; i++)
	{	
		for(int j=1; j<=i; j++)
		{
			printf("%d\t",n);
			n++;		
		}
		printf("\n");
	}
}
