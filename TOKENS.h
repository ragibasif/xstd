// TOKENS.h
//
// Keywords and Tokens for C Compilers and Interpreters

// Reserved Keywords
#define KW_AUTO "auto"
#define KW_BREAK "break"
#define KW_CASE "case"
#define KW_CHAR "char"
#define KW_CONST "const"
#define KW_CONTINUE "continue"
#define KW_DEFAULT "default"
#define KW_DO "do"
#define KW_DOUBLE "double"
#define KW_ELSE "else"
#define KW_ENUM "enum"
#define KW_EXTERN "extern"
#define KW_FLOAT "float"
#define KW_FOR "for"
#define KW_GOTO "goto"
#define KW_IF "if"
#define KW_INT "int"
#define KW_LONG "long"
#define KW_REGISTER "register"
#define KW_RETURN "return"
#define KW_SHORT "short"
#define KW_SIGNED "signed"
#define KW_SIZEOF "sizeof"
#define KW_STATIC "static"
#define KW_STRUCT "struct"
#define KW_SWITCH "switch"
#define KW_TYPEDEF "typedef"
#define KW_UNION "union"
#define KW_UNSIGNED "unsigned"
#define KW_VOID "void"
#define KW_VOLATILE "volatile"
#define KW_WHILE "while"

// Identifiers
#define IDENTIFIER "[a-zA-Z_][a-zA-Z0-9_]*"

// Constants
#define INT_CONST "[0-9]+|0[xX][0-9a-fA-F]+"
#define FLOAT_CONST                                                            \
    "[0-9]*\\.[0-9]+([eE][+-]?[0-9]+)?|[0-9]+\\.?[eE][+-]?[0-9]+"
#define CHAR_CONST "'([^'\\\\]|\\\\.)'"

// Literals
#define STR_LIT "\"([^\"\\\\]|\\\\.)*\""

// Operators
// Arithmetic
#define OP_PLUS "+"
#define OP_MINUS "-"
#define OP_STAR "*"
#define OP_SLASH "/"
#define OP_PERCENT "%"
// Relational
#define OP_LESS "<"
#define OP_GREATER ">"
#define OP_LESS_EQUAL "<="
#define OP_GREATER_EQUAL ">="
#define OP_EQUAL_EQUAL "=="
#define OP_NOT_EQUAL "!="
// Logical
#define OP_AND "&&"
#define OP_OR "||"
#define OP_NOT "!"
// Bitwise
#define BIT_AND "&"
#define BIT_OR "|"
#define BIT_XOR "^"
#define BIT_NOT "~"
#define BIT_LSHIFT "<<"
#define BIT_RSHIFT ">>"
// Assignment
#define ASSIGN_EQUAL "="
#define ASSIGN_PLUS_EQUAL "+="
#define ASSIGN_MINUS_EQUAL "-="
#define ASSIGN_MULT_EQUAL "*="
#define ASSIGN_DIV_EQUAL "/="
#define ASSIGN_MOD_EQUAL "%="
#define ASSIGN_AND_EQUAL "&="
#define ASSIGN_OR_EQUAL "|="
#define ASSIGN_XOR_EQUAL "^="
#define ASSIGN_LSHIFT_EQUAL "<<="
#define ASSIGN_RSHIFT_EQUAL ">>="
// Increment/decrement
#define INC_PLUS_PLUS "++"
#define DEC_MINUS_MINUS "--"
// Other
#define PUNCT_QUESTION "?"
#define PUNCT_COLON ":"
#define PUNCT_COMMA ","

// Separators/Punctuators
#define SEP_SEMICOLON ";"
#define SEP_DOT "."
#define SEP_LPAREN "("
#define SEP_RPAREN ")"
#define SEP_LBRACE "{"
#define SEP_RBRACE "}"
#define SEP_LBRACKET "["
#define SEP_RBRACKET "]"

// Preprocessor Directives
#define PREPROC_HASH "#"
#define PREPROC_DEFINE "#define"
#define PREPROC_INCLUDE "#include"
#define PREPROC_IFDEF "#ifdef"
#define PREPROC_IFNDEF "#ifndef"
#define PREPROC_ENDIF "#endif"
#define PREPROC_IF "#if"
#define PREPROC_ELSE_DIR "#else"
#define PREPROC_ELIF "#elif"
#define PREPROC_LINE "#line"
#define PREPROC_ERROR "#error"
#define PREPROC_PRAGMA "#pragma"
#define PREPROC_UNDEF "#undef"

// Whitespace
#define WS_SPACE " "
#define WS_TAB "\t"
#define WS_NEWLINE "\n"

// Escape Sequences
#define ESC_NEWLINE "\\n"
#define ESC_TAB "\\t"
#define ESC_BACKSLASH "\\\\"
#define ESC_SINGLE_QUOTE "\\'"
#define ESC_DOUBLE_QUOTE "\\\""
#define ESC_NULL "\\0"
#define ESC_BELL "\\a"
#define ESC_BACKSPACE "\\b"
#define ESC_FORMFEED "\\f"
#define ESC_CARRIAGE_RETURN "\\r"
#define ESC_VERTICAL_TAB "\\v"
#define ESC_HEX "\\x[0-9a-fA-F]+"
#define ESC_OCTAL "\\[0-7]{1,3}"

// Boolean
#define BOOL_TRUE "true"
#define BOOL_FALSE "false"

// Comments
#define COMMENT_SINGLE_LINE "//"
#define COMMENT_MULTI_LINE_START "/*"
#define COMMENT_MULTI_LINE_END "*/"
