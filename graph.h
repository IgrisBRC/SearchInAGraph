
struct Node {
  int val;
  struct Node **nodes;
  int conns;
};

void BFS(struct Node *node);
