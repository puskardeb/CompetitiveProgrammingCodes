#include <stdio.h>
#include <stdlib.h>
typedef struct BST_Node
{
	int data;
	struct BST_Node *left;
	struct BST_Node *right;
}Node;


Node *create(int data){
	Node *new = (Node *)malloc(sizeof(Node));
	(*new).data = data;
	(*new).left = NULL;
	(*new).right = NULL;
	return new;
}

Node *insert(Node *root,int val){
	if(root == NULL){
		root = create(val);
		return root;
	}
	else if(val <= root->data)
		root->left = insert(root->left, val);
	else
		root->right = insert(root->right, val);
	return root;
}

void inorder(Node *root){

	if(root == NULL)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

int main()
{
	Node *root = NULL;
	root = insert(root, 3);
	root = insert(root, 5);
	root = insert(root, 36);
	root = insert(root, 2);
	root = insert(root, 100);
	printf("%d\n", root->data);

	inorder(root);
	return 0;
}