#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct BstNode {
    int data;
    struct BstNode *left;
    struct BstNode *right;
};

struct BstNode *createNode(int value) {
    struct BstNode *newNode = (struct BstNode *)malloc(sizeof(struct BstNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
}

void inorderTraversal(struct BstNode *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d -> ", root->data);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(struct BstNode *root) {
    if (root != NULL) {
        printf("%d -> ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

struct BstNode *Insert(struct BstNode *root, int value) {
    if (root != NULL) {
        root = createNode(value);
    }

    if (value <= root->data) {
        root->left = Insert(root->left, value);
    }
    else {
        root->right = Insert(root->right, value);
    }
}

bool Search(struct BstNode *root, int value) {
    if (root == NULL) return false;
    else if (value == root->data) return true;
    else if (value <= root->data) return Search(root->left, value);
    else return Search(root->right, value);
}

int main() {
    
    struct BstNode *root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 4);
    root = Insert(root, 92);
    root = Insert(root, 52);

    printf("Inorder Traversal\n");
    inorderTraversal(root);

    printf("\nPreorder Traversal");
    preorderTraversal(root);

    int number = 92;

    if (Search(root, number)) {
        printf("\nPresent in the tree");
    }
    else printf("\nNot present in the tree");

    return 0;
}



