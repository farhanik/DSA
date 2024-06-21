#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};
typedef struct node Node;
struct node* newNode(int data)
{
	Node *node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	
}

int main()
{
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
    root->right->right=newNode(6);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
    root->right->left=NULL;

	
	return 0;
}
