#include <stdio.h>
#include <stdlib.h>
//tree traversar
//1 12 9 5 6
struct node {
  int item;
  struct node* left;
  struct node* right;
};

// Inorder traversal
void inOrder(struct node* root) {
  if (root == NULL) return;
  inOrder(root->left);
  printf("%d ", root->item);
  inOrder(root->right);
}

// preOrder traversal
void preOrder(struct node* root) {
  if (root == NULL) return;
  printf("%d ", root->item);
  preOrder(root->left);
  preOrder(root->right);
}

// postOrder traversal
void postOrder(struct node* root) {
  if (root == NULL) return;
  postOrder(root->left);
  postOrder(root->right);
  printf("%d ", root->item);
}

// Create a new Node
struct node* createNode(value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// Insert on the left of the node
struct node* insertLeft(struct node* root, int value) {
  root->left = createNode(value);
  return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
  root->right = createNode(value);
  return root->right;
}

int main() {
  struct node* root = createNode(1);
  insertLeft(root, 12);
  insertRight(root, 9);

  insertLeft(root->left, 5);
  insertRight(root->left, 6);

  printf("InOrder traversal \n");
  inOrder(root);

  printf("\nPreOrder traversal \n");
  preOrder(root);

  printf("\nPostOrder traversal \n");
  postOrder(root);

  printf("\n");
  return 0;
}
