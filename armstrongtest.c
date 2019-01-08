//Armstrong number
#include<stdio.h>
main()
{
	int num;
	printf("Enter 3 digits: ");
	scanf("%d",&num);
	int sum=0,cube;
	int n=num,rem;
	while(n>0)
	{
		rem=n%10;
		cube=rem*rem*rem;
		sum+=cube;
		n/=10;
	}
	if(num==sum)
	{
		printf("%d is an armstrong number\n",num);
	}
	else
	{
		printf("%d is not an armstrong number\n",num);
	}
}
