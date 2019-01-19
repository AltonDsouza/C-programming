//Graph
#include<stdio.h>
#include<malloc.h>

struct node
{
	int vertex;
	struct node *next;
};

void *create_graph(struct node *adj[], int);
void *display_graph(struct node *adj[], int);
void *delete_graph(struct node *adj[], int);

main()
{
	struct node *Adj[10];
	int n;
	printf("Enter the number of nodes:");
	scanf("%d",&n);
	for(int i = 0; i<n; i++)
		Adj[i] = NULL;

	create_graph(Adj, n);
	printf("The graph is:\n");
	display_graph(Adj, n);
		
}

void *create_graph(struct node *adj[], int no_of_nodes)
{
	struct node *new_node, *last;
	int n, i;
	int val;
	for(i = 0; i<no_of_nodes; i++)
	{
		last = NULL;
		printf("Enter the number of neighbor nodes of %d node:",i);
		scanf("%d",&n);
		for(int j = 1; j <= n; j++)
		{
			printf("Enter the value of the %d node of %d:",j,i);
			scanf("%d",&val);

			new_node = (struct node*)malloc(sizeof(struct node));
			new_node->vertex = val;
			new_node->next = NULL;
			if(adj[i] == NULL)
				adj[i] = new_node;
			else
				last->next = new_node;
			last = new_node;
		}
	}
}

void *display_graph(struct node *adj[], int no_of_nodes)
{
	struct node *ptr;
	for(int i = 0; i<no_of_nodes; i++)
	{
		ptr = adj[i];
		printf("Adj[%d]->",i);
		while(ptr!=NULL)
		{
			printf("%d->",ptr->vertex);
			ptr = ptr->next;
		}
		printf("\n");
	}
}

/*
 * void delete_graph(struct node *adj[], int no_of_nodes)
 * {
 *	To be added
 * }
*/


/*	OUTPUT:
 * 	Enter the number of nodes:4
   	Enter the number of neighbor nodes of 0 node:2
	Enter the value of the 1 node of 0:22
	Enter the value of the 2 node of 0:23
	Enter the number of neighbor nodes of 1 node:2
	Enter the value of the 1 node of 1:33
	Enter the value of the 2 node of 1:34
	Enter the number of neighbor nodes of 2 node:2
	Enter the value of the 1 node of 2:44
	Enter the value of the 2 node of 2:45
	Enter the number of neighbor nodes of 3 node:2
	Enter the value of the 1 node of 3:56
	Enter the value of the 2 node of 3:54
	The graph is:
	Adj[0]->22->23->
	Adj[1]->33->34->
	Adj[2]->44->45->
	Adj[3]->56->54->
*/
