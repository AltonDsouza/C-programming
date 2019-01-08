//Convert binary to decimal
#include<stdio.h>
main()
{
	int num;
	printf("Enter the binary number: ");
	scanf("%d",&num);
	int n=num,rem,j=1,dec=0,a;
	while(n>0)
	{	
		rem=n%10;//Taking the last digit 
		a=rem*j;
		dec+=a;//final decimal value stored here
		j*=2;//Binary
		n/=10;//Eliminating the last digit
	}
	printf("Conversion of %d to decimal is %d\n",num,dec);
}
