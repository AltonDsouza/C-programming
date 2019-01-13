//Circular Linked List
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);


main()
{
 while(1)
        {
                int option;
                printf("1.CREATE LINKED LIST\n");
                printf("2.INSERT AT BEGINNING\n");
                printf("3.INSERT AT END\n");
                printf("4.DELETE AT BEGINNING\n");
                printf("5.DELETE AT END\n");
                //printf("6.DELETE LIST\n");
                printf("7.DISPLAY\n");
                printf("8.EXIT\n");
                printf("Enter your option: ");
                scanf("%d",&option);

		switch(option)
		{
			case 1:
				start = create_ll(start);
				break;
			case 2:
				start = insert_beg(start);
				printf("Inserted Successfully!\n");
				break;
			case 3:
				start = insert_end(start);
				printf("Inserted at the end!\n");
				break;

			case 4:
				start = delete_beg(start);
				printf("Deleted at the beginning!\n");
				break;
			case 5:
				start = delete_end(start);
				printf("Deleted at the end!\n");
				break;
			case 7:
				start = display(start);
				break;

			case 8:
				exit(1);
		}

	}
}

//Creating circular linked list
struct node *create_ll(struct node *start)
{
	struct node *new_node, *ptr;
	int num;
	printf("Enter -1 to terminate\n");
	printf("Enter data:");
	scanf("%d",&num);
	while(num != -1)
	{
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node->data = num;
		if(start == NULL)
		{
			start = new_node;
			//last node points to the first node(Circular linked)
			new_node->next = start;
		}
		else
		{
			ptr = start;
			while(ptr->next != start)
			{
				ptr = ptr->next;
			}
			ptr->next = new_node;
			new_node->next = start;

		}
		printf("Enter data:");
		scanf("%d",&num);
	}
	return start;
}

struct node *display(struct node *start)
{
	struct node *ptr;
	if(start == NULL)
	{
		printf("No data Inserted, Please insert some!\n");
		return start;
	}
	else
	{
		ptr = start;
		while(ptr->next != start)
		{
			printf("%d->",ptr->data);
			ptr = ptr->next;
		}
		printf("%d->\n",ptr->data);
		return start;
	}
}

//Inserting node at the beginning
struct node *insert_beg(struct node *start)
{
	struct node *ptr, *new_node;;
	int num;
	printf("Enter the num to be inserted: ");
	scanf("%d",&num);
	
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = num;

	ptr = start;
	while(ptr->next != start)
	{
		ptr = ptr->next;
	}
	new_node->next = start;
	ptr->next = new_node;
	start = new_node;
	return start;
}

//Inserting node at last
struct node *insert_end(struct node *start)
{
	struct node *ptr, *new_node;
	int num;
        printf("Enter the num to be inserted: ");
        scanf("%d",&num);

        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
	
	ptr = start;
	while(ptr->next != start)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	new_node->next = start;
	return start;
}
//Deleting first node 
struct node *delete_beg(struct node *start)
{
	if(start == NULL)
	{
		printf("UNDERFLOW\n");
		return start;
	}
	else
	{
	struct node *ptr;
        ptr = start;
        while(ptr->next != start)
        {
                ptr = ptr->next;
        }
        ptr->next = start->next;
        free(start);
        start = ptr->next;
        return start;
	}
}

//Deleting last node
struct node *delete_end(struct node *start)
{
       if(start == NULL)
        {
                printf("UNDERFLOW\n");
                return start;
        }
        else
        {
        struct node *ptr, *preptr;
        ptr = start;
        while(ptr->next != start)
        {
		preptr = ptr;
                ptr = ptr->next;
        }
       	preptr->next = start; 
	free(ptr);
        return start;
        }

}

