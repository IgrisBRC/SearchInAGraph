#pragma once
#include "graph.h"
#include <stdbool.h>

struct qNode {
  struct Node *node;
  struct qNode *next;
};

struct Queue {
  struct qNode *bottom;
  struct qNode *top;
};

struct Queue *new_queue();
void print(struct Queue *);
void enqueue(struct Queue *, struct Node *);
void dequeue(struct Queue *);
void freequeue(struct Queue *);
void freequeue_for_me(struct qNode *);
bool queue_is_empty(struct Queue *);
struct Node * queue_top(struct Queue *);
