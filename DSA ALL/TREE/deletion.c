#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *newNode(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = data;
    temp->left = temp->right = NULL;

    return temp;
}

struct Node *insert(struct Node *root, int data)
{
    if (root == NULL)
    {
        return newNode(data);
    }
    if (data > root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data < root->data)
    {
        root->right = insert(root->right, data);
    }

    return root;
}

void inOrder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    printf("%d  ", root->data);
    inOrder(root->right);
}

int getMin(struct Node* root){
    struct Node* temp = root;

    while (temp->left != NULL){
        temp = temp->left;
    }

    return temp->data;
}

struct Node *removeNode(struct Node *root, int val)
{

    if (root == NULL)
    {
        return NULL;
    }

    if (root->data < val)
    {
        root->right = removeNode(root->right, val);
    }

    else if (root->data > val)
    {
        root->left = removeNode(root->left, val);
    }

    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        else if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }

        else{
            int min = getMin(root->right);
            root->data = min;
            root->right = removeNode(root->right , min);
        }
    }
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, 50);

    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    root = removeNode(root, 50);

    inOrder(root);
    return 0;
}