#include "graph.h"
#include <stdio.h>

void DFS(struct Node *node) {

  if (node) {
    printf("%d -> ", node->val);
  }

  struct Node **itr = node->nodes;

  if (!itr) {
      printf("None\n");
    return;
  }

  for (int i = 0; i < node->conns; i++) {
    DFS(*itr);
    itr++;
  }
}

