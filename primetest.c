//Check whether a given number is prime or no
#include<stdio.h>
#include<math.h>
main()
{
	int num,flag=0;
	printf("Enter a number");
	scanf("%d",&num);
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("%d is not a prime number\n",num);
	else
		printf("%d is a prime number\n",num);
}
