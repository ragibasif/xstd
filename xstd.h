#ifndef __XSTD_H__
#define __XSTD_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*=============================================================================
Includes
=============================================================================*/

#include <stdio.h>

/*=============================================================================
ANSI ESCAPE CODES
=============================================================================*/

// Reset all attributes
#define X_ANSI_RESET "\x1b[0m"

// Text colors
#define X_ANSI_BLACK "\x1b[30m"
#define X_ANSI_RED "\x1b[31m"
#define X_ANSI_GREEN "\x1b[32m"
#define X_ANSI_YELLOW "\x1b[33m"
#define X_ANSI_BLUE "\x1b[34m"
#define X_ANSI_MAGENTA "\x1b[35m"
#define X_ANSI_CYAN "\x1b[36m"
#define X_ANSI_WHITE "\x1b[37m"
#define X_ANSI_DEFAULT "\x1b[39m"

// Background colors
#define X_ANSI_BG_BLACK "\x1b[40m"
#define X_ANSI_BG_RED "\x1b[41m"
#define X_ANSI_BG_GREEN "\x1b[42m"
#define X_ANSI_BG_YELLOW "\x1b[43m"
#define X_ANSI_BG_BLUE "\x1b[44m"
#define X_ANSI_BG_MAGENTA "\x1b[45m"
#define X_ANSI_BG_CYAN "\x1b[46m"
#define X_ANSI_BG_WHITE "\x1b[47m"
#define X_ANSI_BG_DEFAULT "\x1b[49m"

// Bright text colors
#define X_ANSI_BRIGHT_BLACK "\x1b[90m"
#define X_ANSI_BRIGHT_RED "\x1b[91m"
#define X_ANSI_BRIGHT_GREEN "\x1b[92m"
#define X_ANSI_BRIGHT_YELLOW "\x1b[93m"
#define X_ANSI_BRIGHT_BLUE "\x1b[94m"
#define X_ANSI_BRIGHT_MAGENTA "\x1b[95m"
#define X_ANSI_BRIGHT_CYAN "\x1b[96m"
#define X_ANSI_BRIGHT_WHITE "\x1b[97m"

// Bright background colors
#define X_ANSI_BG_BRIGHT_BLACK "\x1b[100m"
#define X_ANSI_BG_BRIGHT_RED "\x1b[101m"
#define X_ANSI_BG_BRIGHT_GREEN "\x1b[102m"
#define X_ANSI_BG_BRIGHT_YELLOW "\x1b[103m"
#define X_ANSI_BG_BRIGHT_BLUE "\x1b[104m"
#define X_ANSI_BG_BRIGHT_MAGENTA "\x1b[105m"
#define X_ANSI_BG_BRIGHT_CYAN "\x1b[106m"
#define X_ANSI_BG_BRIGHT_WHITE "\x1b[107m"

// Text attributes
#define X_ANSI_BOLD "\x1b[1m"
#define X_ANSI_DIM "\x1b[2m"
#define X_ANSI_ITALIC "\x1b[3m"
#define X_ANSI_UNDERLINE "\x1b[4m"
#define X_ANSI_BLINK "\x1b[5m"
#define X_ANSI_REVERSE "\x1b[7m"
#define X_ANSI_HIDDEN "\x1b[8m"
#define X_ANSI_STRIKETHROUGH "\x1b[9m"

// Reset specific attributes
#define X_ANSI_NO_BOLD "\x1b[21m" // or "\x1b[22m" (both work)
#define X_ANSI_NO_ITALIC "\x1b[23m"
#define X_ANSI_NO_UNDERLINE "\x1b[24m"
#define X_ANSI_NO_BLINK "\x1b[25m"
#define X_ANSI_NO_REVERSE "\x1b[27m"
#define X_ANSI_NO_HIDDEN "\x1b[28m"
#define X_ANSI_NO_STRIKETHROUGH "\x1b[29m"

// Cursor movement
#define X_ANSI_CURSOR_UP(n) "\x1b[" #n "A"
#define X_ANSI_CURSOR_DOWN(n) "\x1b[" #n "B"
#define X_ANSI_CURSOR_FORWARD(n) "\x1b[" #n "C"
#define X_ANSI_CURSOR_BACK(n) "\x1b[" #n "D"
#define X_ANSI_CURSOR_NEXT_LINE(n) "\x1b[" #n "E"
#define X_ANSI_CURSOR_PREV_LINE(n) "\x1b[" #n "F"
#define X_ANSI_CURSOR_COLUMN(n) "\x1b[" #n "G"
#define X_ANSI_CURSOR_POSITION(row, col) "\x1b[" #row ";" #col "H"

// Save and restore cursor position
#define X_ANSI_CURSOR_SAVE "\x1b[s"
#define X_ANSI_CURSOR_RESTORE "\x1b[u"

// Cursor visibility
#define X_ANSI_CURSOR_HIDE "\x1b[?25l"
#define X_ANSI_CURSOR_SHOW "\x1b[?25h"

// Screen operations
#define X_ANSI_SCREEN_CLEAR "\x1b[2J"
#define X_ANSI_SCREEN_CLEAR_LINE "\x1b[2K"
#define X_ANSI_SCREEN_CLEAR_TO_END "\x1b[0J"
#define X_ANSI_SCREEN_CLEAR_TO_START "\x1b[1J"
#define X_ANSI_LINE_CLEAR_TO_END "\x1b[0K"
#define X_ANSI_LINE_CLEAR_TO_START "\x1b[1K"
#define X_ANSI_SCROLL_UP(n) "\x1b[" #n "S"
#define X_ANSI_SCROLL_DOWN(n) "\x1b[" #n "T"

// Terminal modes
#define X_ANSI_ALTERNATE_BUFFER "\x1b[?1049h"
#define X_ANSI_MAIN_BUFFER "\x1b[?1049l"
#define X_ANSI_LINE_WRAP_ON "\x1b[?7h"
#define X_ANSI_LINE_WRAP_OFF "\x1b[?7l"

/*=============================================================================
Dynamic Array
=============================================================================*/

/*=============================================================================
Singly Linked List
=============================================================================*/

/*=============================================================================
Doubly Linked List
=============================================================================*/

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __XSTD_H__
