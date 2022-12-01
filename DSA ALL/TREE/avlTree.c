#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    int height;
};

int height(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->height;
}

int Max(int a, int b)
{
    return (a > b) ? a : b;
}

struct Node *newNode(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    temp->height = 1;
    return (temp);
}

int getBalance(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (height(root->left) - height(root->right));
}

struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *t2 = y->left;

    y->left = x;
    x->right = t2;

    x->height = Max(height(x->left), height(x->right)) + 1;
    y->height = Max(height(y->left), height(y->right)) + 1;

    return y;
}

struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = Max(height(y->left), height(y->right)) + 1;
    x->height = Max(height(x->left), height(x->right)) + 1;

    return x;
}

struct Node *insert(struct Node *root, int data)
{
    if (root == NULL)
    {
        return (newNode(data));
    }

    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else
    {
        return root;
    }

    root->height = 1 + Max(height(root->left), height(root->right));

    int balance = getBalance(root);

    if (root->height > 1 && root->left->height == 1)
    {
        return rightRotate(root);
    }

    if (root->height < -1 && root->left->height == -1)
    {
        return leftRotate(root);
    }

    if (root->height > 1 && root->left->height == -1)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    if (root->height < 1 && root->left->height == 1)
    {
        root->right = leftRotate(root->right);
        return rightRotate(root);
    }
}

void preOrder(struct Node *root)
{
	if(root != NULL)
	{
		printf("%d ", root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}


int main()
{

struct Node *root = NULL;

root = insert(root, 10);
root = insert(root, 20);
root = insert(root, 30);
root = insert(root, 40);
root = insert(root, 50);
root = insert(root, 25);

printf("Preorder traversal of the constructed AVL tree is \n");
preOrder(root);

    return 0;
}