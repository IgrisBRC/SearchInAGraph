#include "queue.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Queue *new_queue() {
  struct Node *initial_node = malloc(sizeof(struct Node));
  initial_node->val = 0;
  initial_node->nodes = NULL;
  initial_node->conns = 0;

  struct qNode *initial_qnode = malloc(sizeof(struct qNode));

  initial_qnode->node = initial_node;
  initial_qnode->next = NULL;

  struct Queue *new_queue = malloc(sizeof(struct Queue));
  new_queue->top = initial_qnode;
  new_queue->bottom = initial_qnode;

  return new_queue;
}

void enqueue(struct Queue *q, struct Node *node) {
  struct qNode *new_qnode = malloc(sizeof(struct qNode));

  new_qnode->node = node;
  new_qnode->next = NULL;

  q->top->next = new_qnode;
  q->top = q->top->next;
}


void dequeue(struct Queue *q) {
  if (q->top == q->bottom)  {
    printf("dunderflow");
    exit(2);
  }

  struct qNode *qnode = q->bottom->next;

  if (q->bottom->next->next) {
    q->bottom->next = q->bottom->next->next;
  } else {
    q->bottom->next = NULL;
    q->top = q->bottom;
  }

  free(qnode);
}

void freequeue(struct Queue *q) {
    while(!queue_is_empty(q)) {
        dequeue(q);
    }
    free(q->bottom->node);
    free(q->bottom);
    free(q);
}

/* void freequeue_for_me(struct qNode *qnode) { */
/*   if (qnode->next) { */
/*     freequeue_for_me(qnode->next); */
/*     free(qnode); */
/*   } */
/* } */

bool queue_is_empty(struct Queue *q) { return q->bottom == q->top; }

struct Node* queue_top(struct Queue *q) { return q->bottom->next->node; }

void print(struct Queue *q) {
  struct qNode *itr = q->bottom->next;

  while (itr) {
    printf("%d", itr->node->val);
    itr = itr->next;
  }
}
