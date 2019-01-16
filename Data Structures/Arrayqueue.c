//Array representation of queue
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX],front=-1,rear=-1;
void insert(void);
int delete(void);
void display(void);
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
		val=delete();
		if(val!=-1)
			printf("Value deleted is :%d\n",val);
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
	printf("Enter the data:");
	scanf("%d",&val);
	if(rear==MAX-1)
		printf("OVERFLOW");
		
	if(front==-1 && rear==-1)
		front=rear=0;
	else
		rear+=1;
	
	queue[rear]=val;
}

void display()
{
	if(front==-1 || front>rear){
		printf("Queue is empty\n");
	}
	else
		for(int i=front;i<=rear;i++)
		{
			printf("\t%d",queue[i]);
		}
	printf("\n");
}

int delete()
{
	int val;
	if(front==-1 || front>rear){
		printf("UNDERFLOW\n");
		return -1;
	}
	else{
		val=queue[front];
		front++;
		return val;
	}
}
