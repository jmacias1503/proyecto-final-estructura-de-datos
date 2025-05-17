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
  printf("Estamos en el nodo %d", node->value);
}
void insertNode(struct Node *node, char side, int value){
  if(side == 'l') node->left = value;
  if(side == 'r') node->right = value;
}

int main(){}
