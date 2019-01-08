//Palindrome String
#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%s",&str);
	int l=0;
	int h=strlen(str)-1;
	while(h>=l)
	{
		if(str[l++]!=str[h--])
		{
			printf("%s is not a palindrome\n",str);
			goto label;	
		}
	}
	printf("%s is a palindrome string\n",str);
	label:
		printf("\n");

}
