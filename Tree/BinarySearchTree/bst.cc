#include <iostream>
using namespace std;

struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode* createNode(int value) {
    BstNode *newNode = (BstNode *)malloc(sizeof(BstNode));
    newNode->data = value;
    newNode->right = NULL;
    newNode->left = NULL;

    return newNode;
}

void inorderTraversal(BstNode *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d -> ", root->data);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(BstNode *root) {
    if (root != NULL) {
        printf("%d -> ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

BstNode *Insert(BstNode *root, int value) {
    if(root==NULL) {
        return createNode(value);
    }

    if (value <= root->data) {
        root->left = Insert(root->left, value);
    }
    else {
        root->right = Insert(root->right, value);
    }

    return root;
}

bool Search(BstNode *root, int value) {
    if (root == NULL) return false;
    else if (value == root->data) return true;
    else if (value <= root->data) return Search(root->left, value);
    else return Search(root->right, value);
}

int main() {
    
    BstNode *root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 4);
    root = Insert(root, 92);
    root = Insert(root, 52);

    cout << "Inorder Traversal : ";
    inorderTraversal(root);

    cout << "\nPreorder Traversal : ";
    preorderTraversal(root);

    int number = 92;
    if (Search(root, number)) {
        printf("\nPresent in the tree");
    }
    else printf("\nNot present in the tree");
    
    return 0;
}


