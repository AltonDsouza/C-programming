//Print the sum of n natural numbers using recursion
#include<stdio.h>

int sum(int);
int main()
{
	printf("%d ",sum(20));
}

int sum(int n)
{
	if(n!=0)
		return n + sum(n-1);
	else
		return n;
}
