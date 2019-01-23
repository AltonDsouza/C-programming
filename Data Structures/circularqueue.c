//Circular Queue
#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1, rear=-1;

void insert(void);
void display(void);
int delete(void);

main()
{
int option,val;
while(1)
{
 printf("1. INSERT\n");
 printf("2. DELETE\n");
 printf("3. DISPLAY\n");
 printf("4. EXIT\n");
 printf("Enter your option:");
 scanf("%d",&option);
 switch(option)
 {
        case 1:
                insert();
                break;
        case 2:
                val = delete();
		if(val!=-1)
			printf("Value Deleted:%d\n",val);
                break;
        case 3:
                display();
                break;
	case 4:
		exit(1);
 }
}
}

void insert()
{
	int val;
	printf("Enter the value:");
	scanf("%d",&val);
	if(front==0 && rear==MAX - 1)
		printf("Queue is full.OVERFLOW\n");
	else if(front==-1 && rear==-1)
		front=rear=0;
	else if(front!=0 && rear==MAX-1)
		rear=0;
	else
		rear++;
	queue[rear] = val;	
}

void display()
{
	if(front==-1 && rear==-1)
		printf("Queue is empty!\n");
	else

		if(front<rear || front==rear)
		{
			for(int i=front; i<=rear; i++)
			{
				printf("\t%d",queue[i]);
			}
		}
		else
		{
			for(int i=0; i<=rear; i++)
				printf("\t%d",queue[i]);
			for(int i=front; i<MAX; i++)
				printf("\t%d",queue[i]);
		}
	printf("\n");
}

int delete()
{
	int val;
	if(front==-1)
		printf("Queue is empty!");
	val = queue[front];
	if(front==rear)
		front=rear=-1;
	else
		if(front==MAX-1)
			front=0;
		else
			front++;
	return val;
}
