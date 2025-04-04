#include "xstd.h"

struct xstd_node {
  int data;
  struct xstd_node *next;
};

struct xstd_node *xstd_node_create(int data, struct xstd_node *next) {
  struct xstd_node *current = malloc(sizeof(*current));
  if (current == NULL) {
    fprintf(stderr, "Fatal: failed to allocate %zu bytes.\n", sizeof(*current));
    exit(EXIT_FAILURE);
  }
  current->data = data;
  current->next = next;
  return current;
}
void xstd_node_delete(struct xstd_node *node) {
  free(node);
  node->data = 0;
  node->next = NULL;
  node = NULL;
}

void xstd_node_iterative_print(struct xstd_node *node) {
  while (node != NULL) {
    printf("Node Address: %p\n", (void *)node);
    printf("Node Data: %d\n", node->data);
    printf("Node Next Address: %p\n", (void *)node->next);
    node = node->next;
  }
  puts(__func__);
}
void xstd_node_recursive_print(struct xstd_node *node) {
  if (node == NULL) {
    puts(__func__);
    return;
  }

  printf("Node Address: %p\n", (void *)node);
  printf("Node Data: %d\n", node->data);
  printf("Node Next Address: %p\n", (void *)node->next);
  xstd_node_recursive_print(node->next);
}
void xstd_node_recursive_reversed_print(struct xstd_node *node) {
  if (node == NULL) {
    puts(__func__);
    return;
  }
  xstd_node_recursive_reversed_print(node->next);
  printf("Node Address: %p\n", (void *)node);
  printf("Node Data: %d\n", node->data);
  printf("Node Next Address: %p\n", (void *)node->next);
}

struct xstd_node *xstd_find_node(struct xstd_node *node, int data) {
  while (node != NULL) {
    if (node->data == data)
      return node;
  }
  return NULL;
}
