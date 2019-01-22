//Linked Representation of queue
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next; 
};

//struct queue{};
struct node *front;
struct node *rear;

//struct queue *q;
void insert();
void delete();
void display();

main()
{
int option;

while(1)
{
        printf("1. INSERT\n");
        printf("2. DELETE\n");
        printf("3. DISPLAY\n");
        printf("4. QUIT\n");
        printf("Enter your option:");
        scanf("%d", &option);
        switch(option)
        {
                case 1:
                        insert();
                        break;
                case 2:
                        delete();
                        break;
                case 3:
                        display();
                        break;
                case 4:
                        exit(1);
        }
}		
}

/*
struct queue *create()
{
	struct queue *q = malloc(sizeof(*q));
        q->front = NULL;
        q->rear = NULL;
	return q;
}*/

void insert()
{
	struct node *new_node;
	int val;
	printf("Enter the value:");
	scanf("%d",&val);

	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = val;
	if(front == NULL)
	{	
		front = rear = new_node;
		front->next = rear->next = NULL;	
	}
	else
	{
		rear->next = new_node;
		rear = new_node;
		rear->next = NULL;
	}
}

void delete()
{
	struct node *ptr;
	ptr = front;
	int val;
	if(ptr == NULL)
		printf("Queue is empty! UNDERFLOW\n");
	else
	{
		val = ptr->data;
		printf("Value Deleted: %d\n",val);
		front = ptr->next;
		free(ptr);
	}
}

void display()
{
	struct node *ptr;
	ptr = front;
	if(ptr == NULL)
		printf("Queue is empty!\n");
	else
	{
		while(ptr!=rear)
		{
			printf("\t%d",ptr->data);
			ptr = ptr->next;
		}
		printf("\t%d",ptr->data);
		printf("\n");
	}
}
