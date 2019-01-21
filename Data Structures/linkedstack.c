//Linked Representation of stack
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *next;
};
struct node *top=NULL;
struct node *push(struct node *);
struct node *pop(struct node *);
void display(struct node *);

main()
{
int option;
while(1)
{
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. QUIT\n");
        printf("Enter your option:");
	scanf("%d", &option);
	switch(option)
	{
		case 1:
			top = push(top);
			break;
		case 2:
			top = pop(top);
			break;
		case 3:
			display(top);
			break;
		case 4:
			exit(1);
	}
}
}

struct node *push(struct node *top)
{
	struct node *new_node;
	int val;
	printf("Enter the value:");
	scanf("%d",&val);

	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = val;
	new_node->next = NULL;

	if(top == NULL)
		top = new_node;
	else
		new_node->next = top;
		top = new_node;
	return top;
}

struct node *pop(struct node *top)
{
	struct node *ptr;
	if(top == NULL)
	{
		printf("Underflow\n");
	}
	else
	{
		ptr = top;
		top = top->next;
		free(ptr);
	}
	return top;
}

void display(struct node *top)
{
	struct node *ptr;
	if(top==NULL)
		printf("Stack is empty!\n");
	else
	{
		ptr = top;
		while(ptr!=NULL)
		{
			printf("%d\n",ptr->data);
			ptr = ptr->next;
		}
	}
	printf("\n");
}
