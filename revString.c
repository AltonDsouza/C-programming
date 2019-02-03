//Reversing a string
#include<stdio.h>
#include<string.h>
main()
{
	int temp;
	char str[100];
	char st[100];
	int flag = 0;
	printf("Enter a string:");
	scanf("%s",st);
	int lo = 0;
	int hi = strlen(st) - 1;
	for(int i = 0; i<=hi; i++)
	{
		str[i] = st[i];
	}
	for(int i = lo; i<=hi; i++)
	{
		temp = st[lo];
		st[lo] = st[hi];
		st[hi] = temp;
		lo++;
		hi--;
	}

	printf("Reverse String is :%s\n",st);
	
	
	for(int i = 0; i<=hi; i++)
	{
		if(str[i] != st[i])
		{
			flag = 1;
			printf("Not a palindrome\n");
			break;
		}
	}
	if(flag == 0)
		printf("Palindrome!\n");
}
