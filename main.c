#include "main.h"
#define F_MEMORY_DEBUG /* turns on the memory debugging system */
#define F_MEMORY_PRINT /* turns on the memory printing system */
#define F_EXIT_CRASH   /* turns on the crash on exit */
#include "forge.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void aec_demo() {
    printf("%s%s%s\n", AEC_RED, "RED", AEC_RESET);
    printf("%s%s%s\n", AEC_CYAN, "CYAN", AEC_RESET);
    printf("%s%s%s\n", AEC_MAGENTA, "MAGENTA", AEC_RESET);
    printf("%s%s%s\n", AEC_DEFAULT, "DEFAULT", AEC_RESET);
}

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    printf("Hello, world!\n");
    aec_demo();

    // memory debugging - dont touch
    f_debug_memory_init(NULL, NULL, NULL);
    f_debug_mem_print(0);
    f_debug_mem_reset();
    return 0;
}
