//Operations on Binary tree(Insertion , Preorder, Inorder, Postorder, Deletion)
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
};
struct node *root;
void *create_node(struct node *);
struct node *insert(struct node *);
void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);
struct node *delete(struct node *);

main()
{
	int option, val;
	create_node(root);
	while(1)
	{
		printf("1.INSERT\n");
		printf("2.PRE-ORDER\n");
		printf("3.IN-ORDER\n");
		printf("4.POST-ORDER\n");
		printf("5.DELETE\n");
		printf("6.EXIT\n");
		printf("Choose your option:");
		scanf("%d",&option);

		switch(option)
		{
			case 1:
				root = insert(root);
				break;
			case 2:
				preorder(root);
				printf("\n");
				break;
			case 3:
				inorder(root);
				printf("\n");
				break;
			case 4:
				postorder(root);
				printf("\n");
				break;
			case 5:
				root = delete(root);
				break;
			case 6:
				exit(1);
		}
	}
}

void *create_node(struct node *root)
{
	root = NULL;
}

struct node *insert(struct node *root)
{
	struct node *new_node, *ptr, *parentptr;
	int val;
	printf("Enter element: ");
	scanf("%d",&val);

	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = val;
	new_node->left = NULL;
	new_node->right = NULL;
	if(root == NULL)
	{
		root = new_node;
		root->left = NULL;
		root->right = NULL;
	}
	else
	{
		parentptr = NULL;
		ptr =root;
		while(ptr!=NULL)
		{
			parentptr = ptr;
			if(val<ptr->data)
			{
				ptr = ptr->left;
			}
			else
			{
				ptr = ptr->right;
			}
		}
		if(val < parentptr->data)
		{
			parentptr->left = new_node;
		}
		else
		{
			parentptr->right = new_node;
		}

	}
	return root;
}

void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("\t%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("\t%d",root->data);
		inorder(root->right);
	}
}

void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("\t%d",root->data);
	}
}

struct node *delete(struct node *root)
{
	struct node *cur, *parent, *ptr;
	int val;
	printf("Value you want to delete:");
	scanf("%d",&val);
	if(root == NULL)
	{
		printf("Tree is empty!\n");
		return root;
	}
	parent = root;
	cur = parent;
	while((cur!=NULL) && (val!=cur->data))
	{
		parent = cur;
		cur = val < cur->data?cur->left:cur->right;
	}
	//If value is not present in the tree
	if(cur == NULL)
	{
		printf("The value is not present in the tree.");
		return root;
	}
	if(cur->left == NULL)
		ptr = cur->right;
	else if(cur->right == NULL)
		ptr = cur->left;
	else
	{
		//Deleting node with two child
                psuc = cur;
                suc = cur->right;
                while(suc->left!=NULL)
                {
                        psuc = suc;
                        suc = suc->left;
                }
                if(cur == psuc)
                {
                        suc->left = cur->left;
                }
                else
                {
                        suc->left = cur->left;
                        suc->right = cur->right;
                        psuc->left = suc->right;
                }
                ptr = suc;

	}
	if(parent->left == cur)
		parent->left = ptr;
	else
		parent->right = ptr;
	free(cur);
	return root;
}
