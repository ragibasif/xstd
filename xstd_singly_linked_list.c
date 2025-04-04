#include "xstd.h"
struct xstd_singly_linked_list {
  int data;
  struct xstd_singly_linked_list *next;
};

struct xstd_singly_linked_list *
xstd_singly_linked_list_create_node(int data,
                                    struct xstd_singly_linked_list *next) {
  struct xstd_singly_linked_list *list = malloc(sizeof(*list));
  if (list == NULL) {
    fprintf(stderr, "Fatal: failed to allocate %zu bytes.\n", sizeof(*list));
    exit(EXIT_FAILURE);
  }
  list->data = data;
  list->next = next;
  return list;
} // xstd_singly_linked_list_create_node
void xstd_singly_linked_list_delete(struct xstd_singly_linked_list *list) {
  while (list != NULL) {
    struct xstd_singly_linked_list *temp = list->next;
    list->data = 0;
    list->next = NULL;
    free(list);
    list = temp;
  } // while (list != NULL)
} // xstd_singly_linked_list_delete
void *
xstd_singly_linked_list_insert_front(int data,
                                     struct xstd_singly_linked_list *list) {
  struct xstd_singly_linked_list *head =
      xstd_singly_linked_list_create_node(data, list);
  return head;
} // xstd_singly_linked_list_insert_front

void xstd_singly_linked_list_insert_back(int data,
                                         struct xstd_singly_linked_list *list) {

  struct xstd_singly_linked_list *tail =
      xstd_singly_linked_list_create_node(data, NULL);

  while (list->next != NULL) {
    list = list->next;
  } // while (list->next != NULL)
  list->next = tail;
} // xstd_singly_linked_list_insert_back

void xstd_singly_linked_list_print(struct xstd_singly_linked_list *list) {
} // xstd_singly_linked_list_print
