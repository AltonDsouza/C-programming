//Command Line Argument
#include<stdio.h>

/*
 * argc-Number of command line arguments
 * char *argv[]- List of command line arguments
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	if(argc<4 || argc>5)
	{
		printf("Enter 4 arguments!\n");
		return 0;
	}

	//Converts string number to integer
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	
	if(a<0 || b<0 || c<0)
	{
		printf("Enter only positive numbers!\n");
		return 1;
	}
	if(!(a!=b && b!=c && a!=c))
	{
		printf("Please enter different value \n");
		return 1;
	}
	else
	{
		if(a>b && a>c)
			printf("%d is largest\n",a);
		else if(b>c && b>a)
			printf("%d is largest\n",b);
		else
			printf("%d is largest\n",c);
	}
}
