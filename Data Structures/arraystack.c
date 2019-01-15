//Array representation of stack
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int top = -1;
void push(int arr[], int);
int pop(int arr[]);
int peek(int arr[]);
void display(int arr[]);

main()
{
	int arr[MAX];
	int option,val;
	while(1)
	{
        printf("*********MAIN MENU*********\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("Enter your option:");
        scanf("%d",&option);

        switch(option)
	{
		case 1:
                        printf("Enter the number to be pushed on stack");
                        scanf("%d",&val);
                        push(arr,val);
                        break;
                case 2:
                        val=pop(arr);
                        if(val!=-1)
                                printf("Value deleted from stack is : %d\n",val);
                        break;
                case 3:
                        val=peek(arr);
                        if(val!=-1)
                                printf("Value stored at the top of stack:%d",val);
                        break;
                case 4:
                        display(arr);
                        break;
                case 5:
                        exit(1);

	}
	}
	
}

void push(int arr[], int val)
{
	if(top == MAX - 1)
	{
		printf("Stack is Full!\n");
	}
	else
	{
		top++;
		arr[top] = val;
	}
}

void display(int arr[])
{
	for(int i = top; i>=0; i--)
	{
		printf("%d\n", arr[i]);
	}
}

int pop(int arr[])
{
	int val;
	if(top == -1)
	{
		printf("Stack is empty!\n");
		return -1;
	}
	else
	{
		val = arr[top];
		top--;
		return val;
	}
}

int peek(int arr[])
{
	int val;
	if(top == -1)
	{
		printf("Stack is empty!");
		return -1;
	}
	else
	{
		val = arr[top];
		return val;
	}

}
