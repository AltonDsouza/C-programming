//Priority Queue
#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	int priority;
	struct node *next;
};

struct node *start=NULL;
struct node *insert(struct node *);
struct node *delete(struct node *);
void display(struct node *);

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
                                start=insert(start);
                                break;
                        case 2:
                                start=delete(start);
                                break;
                        case 3:
                                display(start);
                                break;
                        case 4:
				exit(1);
		}
	}
}

struct node *insert(struct node *start)
{
	struct node *new_node,*ptr;
	int pri,val;
	printf("Enter the element:");
	scanf("%d",&val);
	printf("Enter priority of the element:");
	scanf("%d",&pri);

	new_node = malloc(sizeof(*new_node));
	new_node->data = val;
	new_node->priority = pri;
	if(start == NULL)
	{
		new_node->next = NULL;
		start = new_node;
	}
	else
	{
		ptr = start;
		while(ptr->next!=NULL &&  ptr->next->priority<=pri)
			ptr = ptr->next;
		if(ptr->priority > pri)
		{
			new_node->next = start;
			start = new_node;
		}
		else
		{
			new_node->next = ptr->next;
			ptr->next = new_node;
		}
	}
	return start;
}

void display(struct node *start)
{
	struct node *ptr;
	if(start == NULL)
		printf("Queue is empty\n");
	else
	{
		ptr = start;
		while(ptr!=NULL)
		{
			printf("%d Pri:%d\n",ptr->data,ptr->priority);
			ptr = ptr->next;
		}
	}
}

struct node *delete(struct node *start)
{
	//Delete the first node in the list
	struct node *ptr;
	int val;
	if(start == NULL)
		printf("Queue is empty!\n");
	else
	{
		ptr = start;
		val = start->data;
		printf("Value deleted:%d\n",val);
		start = start->next;
		free(ptr);
	}
	return start;
}
