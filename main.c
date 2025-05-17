#include <stdio.h>
#include <stdlib.h> 

struct Node{
  int value;
  struct Node *left, *right;
};

void postOrder(struct Node *node){
  if (node == NULL) return;
  postOrder(node->left);
  postOrder(node->right);
  printf("Estamos en el nodo %d\n", node->value);
}
void insert(struct Node *node, int value){
  if (node == NULL) return;
  if (value < node->value){
    if (node->left == NULL){
      struct Node *newNode = malloc(sizeof(struct Node));
      newNode->value = value;
      node->left = newNode;
    } else {
      insert(node->left, value);
    }
  } else {
    if (node->right == NULL){
      struct Node *newNode = malloc(sizeof(struct Node));
      newNode->value = value;
      node->right = newNode;
    } else {
      insert(node->right, value);
    }
  }
}
int main(){
}

int main(){}
