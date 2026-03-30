#include <stdio.h>
#include <stdlib.h>
// Structure of tree node
struct node
{
int data;
struct node *left;
struct node *right;
};
// Create new node
struct node* createNode(int data)
{
struct node *newNode;
newNode = (struct node *)malloc(sizeof(struct node));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
// Inorder Traversal (Left, Root, Right)
void inorder(struct node *root)
{
if (root != NULL)
{
inorder(root->left);
printf("%d ", root->data);
inorder(root->right);
}
}
// Preorder Traversal (Root, Left, Right)
void preorder(struct node *root)
{
if (root != NULL)
{
printf("%d ", root->data);
preorder(root->left);
preorder(root->right);
}
}
// Postorder Traversal (Left, Right, Root)
void postorder(struct node *root)
{
if (root != NULL)
{
postorder(root->left);
postorder(root->right);
printf("%d ", root->data);
}
}
int main()
{
/* Creating the tree
1
/ \
2 3
/ \ \
4 5 6
*/
struct node *root = createNode(1);
root->left = createNode(2);
root->right = createNode(3);
root->left->left = createNode(4);
root->left->right = createNode(5);
root->right->right = createNode(6);
printf("Inorder Traversal: ");
inorder(root);
printf("\nPreorder Traversal: ");
preorder(root);
printf("\nPostorder Traversal: ");
postorder(root);
return 0;
}

