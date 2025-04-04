#include "xstd.h"

// ANSI COLOR CODES
#define XSTD_ANSI_RED "\x1b[91m"
#define XSTD_ANSI_GREEN "\x1b[92m"
#define XSTD_ANSI_YELLOW "\x1b[93m"
#define XSTD_ANSI_MAGENTA "\x1b[95m"
#define XSTD_ANSI_BLUE "\x1b[94m"
#define XSTD_ANSI_CYAN "\x1b[96m"
#define XSTD_ANSI_ITALIC "\x1b[3m"
#define XSTD_ANSI_BOLD "\x1b[1m"
#define XSTD_ANSI_RESET "\x1b[0m"

static void xstd_prefix(void) {} // xstd_prefix

static void xstd_location_log(const char *file, unsigned int line,
                              const char *function) {} // xstd_location_log

void xstd_informational_log(const char *message, const char *file,
                            unsigned int line, const char *function) {
  xstd_location_log(file, line, function);
  printf(" %s%s%s%s\n", XSTD_ANSI_BLUE, XSTD_ANSI_BOLD, message,
         XSTD_ANSI_RESET);
} // xstd_informational_log

void xstd_error_log(const char *message, const char *file, unsigned int line,
                    const char *function) {
  printf("(%s%s%s%s) ", XSTD_ANSI_MAGENTA, XSTD_ANSI_BOLD, "xstd",
         XSTD_ANSI_RESET);
  printf("%s%s%s %u %s%s ", XSTD_ANSI_CYAN, XSTD_ANSI_ITALIC, file, line,
         function, XSTD_ANSI_RESET);
  printf(" %s%s%s%s\n", XSTD_ANSI_RED, XSTD_ANSI_BOLD, message,
         XSTD_ANSI_RESET);
} // xstd_error_log

void xstd_success_log(const char *message, const char *file,

                      unsigned int line, const char *function) {

  xstd_location_log(file, line, function);
  printf(" %s%s%s%s\n", XSTD_ANSI_GREEN, XSTD_ANSI_BOLD, message,
         XSTD_ANSI_RESET);
} // xstd_success_log

void xstd_warning_log(const char *message, const char *file, unsigned int line,
                      const char *function) {

  xstd_location_log(file, line, function);
  printf(" %s%s%s%s\n", XSTD_ANSI_YELLOW, XSTD_ANSI_BOLD, message,
         XSTD_ANSI_RESET);
} // xstd_warning_log
