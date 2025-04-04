#include "xstd.h"
#define IMD_MEMORY_DEBUG
#include "imd.h"

// LINKED LIST

// LINKED LIST

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  xstd_informational_log("xstd_informational_log", __FILE__, __LINE__,
                         __func__);
  xstd_error_log("xstd_error_log", __FILE__, __LINE__, __func__);
  xstd_success_log("xstd_success_log", __FILE__, __LINE__, __func__);
  xstd_warning_log("xstd_warning_log", __FILE__, __LINE__, __func__);

  struct xstd_node *tail = xstd_node_create(8, NULL);
  struct xstd_node *n2 = xstd_node_create(7, tail);
  struct xstd_node *n3 = xstd_node_create(6, n2);
  struct xstd_node *n4 = xstd_node_create(5, n3);
  struct xstd_node *n5 = xstd_node_create(4, n4);
  struct xstd_node *n6 = xstd_node_create(3, n5);
  struct xstd_node *n7 = xstd_node_create(2, n6);
  struct xstd_node *head = xstd_node_create(1, n7);
  xstd_node_iterative_print(head);
  xstd_node_recursive_print(head);
  xstd_node_recursive_reversed_print(head);

  xstd_node_delete(tail);
  xstd_node_delete(n2);
  xstd_node_delete(n3);
  xstd_node_delete(n4);
  xstd_node_delete(n5);
  xstd_node_delete(n6);
  xstd_node_delete(n7);
  xstd_node_delete(head);

  // WARNING: INTERNAL DEBUGGING. DO NOT TOUCH.
  imd_debug_memory_init(NULL, NULL, NULL);
  imd_debug_memory_print(0);
  imd_debug_memory_reset();
  return 0;
}
