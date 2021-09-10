#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *nodeCreate(int value)
{
  struct node *nodeNew;
  nodeNew = (struct node *)malloc(sizeof(struct node));

  nodeNew->data = value;
  nodeNew->left = NULL;
  nodeNew->right = NULL;

  return nodeNew;
}

struct node* insertLeft(struct node* root, int value) {
  root->left = nodeCreate(value);
  return root->left;
}

struct node* insertRight(struct node* root, int value) {
  root->right = nodeCreate(value);
  return root->right;
}

void main()
{
  struct node *root;
  root = nodeCreate(4);
  /*
              4
            /   \
          NULL  NULL
    */
  root->left = nodeCreate(3);
  root->right = nodeCreate(7);
  /*
            4
         /     \
        3       7
      /   \    /  \
    NULL NULL NULL NULL
   */
}