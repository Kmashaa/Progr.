#ifndef TREE_H
#define TREE_H
#include <stdio.h>
#include <stdlib.h>
typedef struct item {
 int data;
 struct item *left;
 struct item *right;
} Item;

void AddNode(int data, Item **node);
void AddNodeNew(int data, Item **node);
void LeftOrder( Item *node);
#endif