//Program to print lcm and hcf of two numbers
#include<stdio.h>
main()
{
	int x, y;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	int a, b;
	a = x;
        b = y;
	while(a!=b)
	{
		if(a<b)
			a = a + x;
		else
			b = b + y;
	}
	printf("The lcm of %d and %d is %d\n",x,y,a);
	
	int m, n;
	m = x;
	n = y;	
	while(m!=n)
	{
		if(m>n)
			m = m - n;
		else
			n = n - m;
	}
	printf("HCF of %d and %d is %d\n",x,y,m);	
}
