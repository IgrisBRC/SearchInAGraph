#pragma once

struct Node {
  int val;
  struct Node **nodes;
  int conns;
};

void DFS(struct Node *node);
