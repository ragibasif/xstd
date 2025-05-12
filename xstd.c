#include "xstd.h"
#define F_MEMORY_DEBUG /* turns on the memory debugging system */
#define F_MEMORY_PRINT /* turns on the memory printing system */
#define F_EXIT_CRASH   /* turns on the crash on exit */
#include "forge.h"

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    printf("Hello, world!\n");

    // memory debugging - dont touch
    f_debug_memory_init(NULL, NULL, NULL);
    f_debug_mem_print(0);
    f_debug_mem_reset();
    return 0;
}
