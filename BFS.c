#include "graph.h"
#include <stdio.h>

void BFS(struct Node *node) {

  if (node) {
    printf("%d -> ", node->val);
  }

  struct Node **itr = node->nodes;

  while (itr && *itr) {
    BFS(*itr);
    itr++;
  }
}
