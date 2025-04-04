#ifndef __XSTD_H__
#define __XSTD_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// FIX: xstd_log.c
extern void xstd_informational_log(const char *message, const char *file,
                                   unsigned int line, const char *function);
extern void xstd_error_log(const char *message, const char *file,
                           unsigned int line, const char *function);
extern void xstd_success_log(const char *message, const char *file,
                             unsigned int line, const char *function);
extern void xstd_warning_log(const char *message, const char *file,
                             unsigned int line, const char *function);

// xstd_node.c
extern struct xstd_node *xstd_node_create(int data, struct xstd_node *next);
extern void xstd_node_delete(struct xstd_node *node);
extern void xstd_node_iterative_print(struct xstd_node *node);
extern void xstd_node_recursive_print(struct xstd_node *node);
extern void xstd_node_recursive_reversed_print(struct xstd_node *node);

// xstd_singly_linked_list.c
extern struct xstd_singly_linked_list *
xstd_singly_linked_list_create_node(int data,
                                    struct xstd_singly_linked_list *next);
extern void
xstd_singly_linked_list_delete(struct xstd_singly_linked_list *list);

extern void *
xstd_singly_linked_list_insert_front(int data,
                                     struct xstd_singly_linked_list *list);

extern void
xstd_singly_linked_list_insert_back(int data,
                                    struct xstd_singly_linked_list *list);
extern void xstd_singly_linked_list_print(struct xstd_singly_linked_list *list);

#endif // __XSTD_H__
