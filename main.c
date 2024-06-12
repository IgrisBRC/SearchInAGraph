#include "graph.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  struct Node node3 = {3, NULL};
  struct Node node4 = {4, NULL};
  struct Node node5 = {5, NULL};
  struct Node node6 = {6, NULL};

  struct Node **n1 = malloc(sizeof(struct Node *) * 2);
  n1[0] = &node3;
  n1[1] = &node4;

  struct Node **n2 = malloc(sizeof(struct Node *) * 2);
  n2[0] = &node5;
  n2[1] = &node6;

  struct Node node1 = {1, n1};
  struct Node node2 = {2, n2};

  struct Node **n3 = malloc(sizeof(struct Node *) * 2);
  n3[0] = &node1;
  n3[1] = &node2;

  struct Node node0 = {0, n3};

  BFS(&node0);
  printf("None\n");
}
