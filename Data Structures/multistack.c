//program to implement multiple stack
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int st[MAX],topA=-1,topB=MAX;
void pushA(int st[],int val);
void pushB(int st[],int val);
int popA(int st[]);
int popB(int st[]);
void displayA(int st[]);
void displayB(int st[]);
main()
{
int option,val;
while(1)
{
        printf("*********MAIN MENU*********\n");
        printf("1. PUSH to A\n");
        printf("2. PUSH to B\n");
        printf("3. POP A\n");
        printf("4. POP B\n");
        printf("5. Display stack A\n");
	printf("6. Display stack B\n");
	printf("7. Exit\n");
        printf("Enter your option:");
        scanf("%d",&option);
        switch(option)
        {
                case 1:
                        printf("Enter the number to be pushed on stack A");
                        scanf("%d",&val);
                        pushA(st,val);
                        break;
		case 2:
			printf("Enter the number to be pushed on stack B");
                        scanf("%d",&val);
                        pushB(st,val);
                        break;

                case 3:
                        val=popA(st);
                        if(val!=-1)
                                printf("Value deleted : %d\n",val);
			break;
		case 4:
			val=popB(st);
			if(val!=-1)
				printf("Value deleted : %d\n",val);
			break;
		case 5:
			displayA(st);
			break;
		case 6:
			displayB(st);
			break;
		case 7:
			exit(1);
	}
}
}

void pushA(int st[],int val)
{
	if(topA==topB-1)
		printf("OVERFLOW\n");
	else
		topA++;
		st[topA]=val;
}

int  popA(int st[])
{
	int val;
	if(topA==-1)
		printf("UNDERFLOW\n");
	else
		val=st[topA];
		topA--;
	return val;
}

void displayA(int st[])
{
	if(topA==-1)
		printf("Stack A is empty\n");
	else
		for(int i=topA;i>=0;i--)
		{
			printf("%d\n",st[i]);
		}
}

void pushB(int st[],int val)
{
	if(topB-1==topA)
		printf("OVERFLOW\n");
	else
		topB--;
		st[topB]=val;
}

int popB(int st[])
{
	int val;
	if(topB==MAX)
		printf("UNDERFLOW\n");
	else
		val=st[topB];
		topB++;
	return val;
}

void displayB(int st[])
{
	if(topB==MAX)
	       printf("Stack B is empty\n");
	else
		for(int i=topB;i<MAX;i++)
		{
			printf("%d\n",st[i]);
		}
}
