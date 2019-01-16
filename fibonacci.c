//Fibonacci series
#include<stdio.h>
main()
{
	int num, temp;
	int a = 0;
	int b = 1;
	printf("Enter the number of terms:");
	scanf("%d",&num);

	int i = 0;
	printf("Fibonacci Series: \n");
	printf("%d ",a);
	printf("%d ",b);
	while(i<num-2)
	{
		temp = a + b;
		printf("%d ",temp);
		a = b;
		b = temp;
		i++;
	}
	printf("\n");
}
