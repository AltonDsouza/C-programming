//Linked list
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_after(struct node *);
//struct node *insert_before(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);

main()
{
	while(1)
	{
		int option;
		printf("1.CREATE LINKED LIST\n");
		printf("2.INSERT AT BEGINNING\n");
		printf("3.INSERT AT END\n");
		printf("4.INSERT AFTER A GIVEN NODE\n");
		printf("5.DELETE AT BEGINNING\n");
		printf("6.DELETE AT END\n");
		printf("7.DELETE AFTER A GIVEN NODE\n");
		printf("8.DELETE LIST\n");
		printf("9.DISPLAY\n");
		printf("10.EXIT\n");
		printf("Enter your option: ");
		scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			start = create_ll(start);
			printf("Successfully inserted data\n");
			break;
		case 2:
			start = insert_beg(start);
			printf("Inserted data at the beginning.\n");
			break;
		case 3:
			start = insert_end(start);
			printf("Inserted data at the end\n");
			break;
		case 4:
			start = insert_after(start);
			break;
		case 5:
			start = delete_beg(start);
			printf("Deletion at beginning successfull!\n");
			break;
		case 6:
			start = delete_end(start);
			printf("Deletion at end successfull!\n");
			break;
		case 7:
			start = delete_after(start);
			break;
		case 8:
			start = delete_list(start);
			break;
		case 9:
			start=display(start);
			break;
		case 10:
			exit(1);
			

	}	
	}

}

//Creating a linked list
struct node *create_ll(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	printf("enter -1 to terminate\n");
	printf("Enter data for new node: ");
	scanf("%d",&num);

	while(num!=-1)
	{
		//Allocate memory for the new node and initialize its data part
		new_node=(struct node *)malloc(sizeof(struct node));
                new_node->data=num;

		if(start==NULL)
		{
			start=new_node;
			start->next=NULL;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=new_node;
			new_node->next=NULL;
		
		}
		printf("Enter data for new node:");
		scanf("%d",&num);
	}
	return start;

}

//Displaying the linked list
struct node *display(struct node *start)
{
	struct node *ptr;

	if(start==NULL)
	{
		printf("No data to display, please insert some!\n");
		goto label;
	}
	ptr=start;
	//Traversing through the linked list
	while(ptr->next!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("%d->\n",ptr->data);
	
label:
	return start;
}

//Inserting at the beginning of a linked list
struct node *insert_beg(struct node *start)
{
	struct node *new_node;
	int num;
	printf("Enter data: ");
	scanf("%d",&num);
	
	new_node=(struct node *)malloc(sizeof(struct node)); 
	new_node->data=num;
	new_node->next=start;
	start=new_node;
	return start;
		
}
//Inserting a node at the end of a linked list
struct node *insert_end(struct node *start)
{
	struct node *new_node, *ptr;
	int num;
	printf("Enter data: ");
	scanf("%d",&num);

	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num;

	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=new_node;
	new_node->next=NULL;
	return start;

}

//Inserting after a given node in the list
struct node *insert_after(struct node *start)
{
	struct node *new_node, *ptr;
	int num,after;
	printf("Enter the number after which the node is to be inserted:");
	scanf("%d",&after);
	printf("Enter the number: ");
	scanf("%d",&num);

	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data = num;
	
	ptr=start;
	while(ptr->data!=after)
	{
		ptr = ptr->next;
	}
	new_node->next = ptr->next;
	ptr->next = new_node;
	return start;
}

//Deleting a node at the beginning
struct node *delete_beg(struct node *start)
{
	if(start == NULL)
	{
		printf("UNDERFLOW\n");
		return NULL;
	}
	else
	{
		struct node *ptr;
		ptr=start;
		start = ptr->next;
		free(ptr);
		return start;
	}
}
//Deleting a node at the end
struct node *delete_end(struct node *start)
{
	struct node *preptr, *ptr;
	ptr=start;
	while(ptr->next != NULL)
	{
		preptr = ptr; 
		ptr = ptr->next;
	}

	preptr->next = NULL;
	free(ptr);
	return start;

}

//Deleting a node after a given node
struct node *delete_after(struct node *start)
{
	int num;
	printf("Enter the number after which the node is to be deleted\n");
	scanf("%d",&num);
	struct node *ptr, *preptr;
	ptr = start;
	preptr = ptr;
	while(preptr->data != num)
	{
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = ptr->next;
	free(ptr);
	return start;
}

//Deleting the entire list
struct node *delete_list(struct node *start)
{	
	if(start == NULL)
	{
		printf("UNDERFLOW\n");
		return NULL;
	}
	else
	{
		struct node *ptr;
		ptr = start;
		while(ptr != NULL)
		{
			printf("Value deleted: %d\n",ptr->data);
			start = delete_beg(ptr);
			ptr = start;
		}
		return start;
	}
}
