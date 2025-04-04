#include "xstd.h"
#define IMD_MEMORY_DEBUG
#include "imd.h"

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  // WARNING: INTERNAL DEBUGGING. DO NOT TOUCH.
  imd_debug_memory_init(NULL, NULL, NULL);
  imd_debug_memory_print(0);
  imd_debug_memory_reset();
  return 0;
}
