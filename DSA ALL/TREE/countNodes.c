#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp->data = data;
    temp->left = temp->right = NULL;

    return temp;
}

struct Node* insert(struct Node* root, int data){
    if (root == NULL){
        return newNode(data);
    }
    if (data > root->data){
        root->left = insert(root->left, data);
    }
    else if(data < root->data){
        root->right = insert(root->right, data);
    }

    return root;
}

void inOrder(struct Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    printf("%d  ", root->data);
    inOrder(root->right);
}

int count(struct Node* root){
    if (root == NULL){
        return 0;
    }

    return count(root->left) + count(root->right) + 1;
}
int main()
{
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    inOrder(root);

    int c = count(root);

    printf("\n%d\n", c);
    return 0;
}