#ifndef __XSTD_H__
#define __XSTD_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// xstd_log.c
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

extern struct xstd_node *xstd_find_node(struct xstd_node *node, int data);

#endif // __XSTD_H__
