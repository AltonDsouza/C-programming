//Print 1-100 without using a loop
#include<stdio.h>
int printnos(int);
int main()
{
	printnos(100);
}

int printnos(int n)
{
	if(n>0)
	{
		printnos(n-1);
		printf("%d ",n);
	}
	printf("\n");
}

