//Pyramid 6
#include<stdio.h>
main()
{
	
	for(int i=5; i>=1; i--)
	{
		for(int j=5; j>=i; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
/*
5
54
543
5432
54321
*/
