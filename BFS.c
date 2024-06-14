#include "BFS.h"
#include "queue.h"
#include <stdio.h>

void BFS(struct Node *node) {
  struct Queue *queue_ptr = new_queue();
  enqueue(queue_ptr, node);

  while (!queue_is_empty(queue_ptr)) {
    struct Node* curr = queue_top(queue_ptr);
    dequeue(queue_ptr);
    printf("%d -> ", curr->val);

    for (int i = 0; i < curr->conns; i++) {
      enqueue(queue_ptr, curr->nodes[i]);
    }
  }

  freequeue(queue_ptr);
}
