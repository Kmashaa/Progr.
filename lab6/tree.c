#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

void AddNode(int data, Item **node)
{
 if (*node == NULL) {
 *node = (Item *)calloc(1, sizeof(Item));
 (*node)->data = data;
 (*node)->left = (*node)->right = NULL;
 } else {
 if (data > (*node)->data)
 AddNode(data, &(*node)->left); 

 else if (data < (*node)->data)
 AddNode(data, &(*node)->right);
 }
}

void AddNodeNew(int data, Item **node)
{
 if (*node == NULL) {
 *node = (Item *)calloc(1, sizeof(Item));
 (*node)->data = data;
 (*node)->left = (*node)->right = NULL;
 } else {
 if (data < (*node)->data)
 AddNodeNew(data, &(*node)->left); 

 else if (data > (*node)->data)
 AddNodeNew(data, &(*node)->right);
 }
}
int LeftOrder(Item *node)
{
 if (node->left)
    LeftOrder(node->left);

 printf("%d",node->data);

 if (node->right)
    LeftOrder(node->right);
    
 return 0;
} 