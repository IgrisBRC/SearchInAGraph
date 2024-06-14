#include "BFS.h"
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

  struct Node node3 = {3, NULL, 0};
  struct Node node4 = {4, NULL, 0};
  struct Node node5 = {5, NULL, 0};
  struct Node node6 = {6, NULL, 0};

  struct Node **n1 = malloc(sizeof(struct Node *) * 2);
  n1[0] = &node3;
  n1[1] = &node4;

  struct Node **n2 = malloc(sizeof(struct Node *) * 2);
  n2[0] = &node5;
  n2[1] = &node6;

  struct Node node1 = {1, n1, 2};
  struct Node node2 = {2, n2, 2};

  struct Node **n3 = malloc(sizeof(struct Node *) * 2);
  n3[0] = &node1;
  n3[1] = &node2;

  struct Node node0 = {0, n3, 2};

  DFS(&node0);

  free(n1);
  free(n2);
  free(n3);
  printf("None\n");

  /* struct Node node3 = {3, NULL, 0}; */
  /* struct Node node4 = {4, NULL, 0}; */
  /* struct Node node5 = {5, NULL, 0}; */
  /* struct Node node6 = {6, NULL, 0}; */
  /**/
  /* struct Queue *q = new_queue(); */
  /**/
  /* enqueue(q, &node3); */
  /* dequeue(q); */

}
