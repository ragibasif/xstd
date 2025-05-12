# Makefile

GREEN=\033[0;92m
RED=\033[0;91m
MAGENTA=\033[0;95m
RESET=\033[0m

CC := clang
CFLAGS += -std=c99  -Wall -Wextra -Weverything -O0 -g3 -pedantic -DDEBUG -v
DBG = lldb

LDFLAGS := -v -lc

TEST_DIRECTORY := tests

EXECUTABLE := xstd

SRCS := $(wildcard *.c)
HDRS := $(wildcard *.h)
OBJS := $(patsubst %.c, %.o, $(SRCS))

TEST_SRCS := $(wildcard $(TEST_DIRECTORY)/*.c)
TEST_BINS := $(patsubst $(TEST_DIRECTORY)/%.c, $(TEST_DIRECTORY)/%, $(TEST_SRCS))

.PHONY: all clean help run test check debug

help:
	@echo "${MAGENTA}make help${RESET}"
	@echo "Makefile for Building ${MAGENTA}${EXECUTABLE}${RESET}."
	@echo "Usage:"
	@echo "  ${MAGENTA}make help${RESET}        — this help message"
	@echo "  ${MAGENTA}make all${RESET}         — build program"
	@echo "  ${MAGENTA}make clean${RESET}       — remove build files"
	@echo "  ${MAGENTA}make run${RESET}         — build and run program"
	@echo "  ${MAGENTA}make test${RESET}        — build tests"

all: $(EXECUTABLE)

check:
	@which $(CC) > /dev/null && echo "$(GREEN)✅ SUCCESS: $(CC) is installed$(RESET)" || echo "$(RED)❌ ERROR: $(CC) not found, please install clang$(RESET)"
	@which $(DBG) > /dev/null && echo "$(GREEN)✅ SUCCESS: $(DBG) is installed$(RESET)" || echo "$(RED)❌ ERROR: $(DBG) not found, please install lldb$(RESET)"

$(EXECUTABLE): $(OBJS)
	@echo "🔧 Linking ${MAGENTA}$@${RESET} ..."
	@$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) && \
		echo "$(GREEN)✅ Build successful: $@$(RESET)" || \
		(echo "$(RED)❌ Linking failed: $@$(RESET)" && exit 1)

%.o: %.c
	@echo "🔧 Compiling ${MAGENTA}$<${RESET} ..."
	@$(CC) $(CFLAGS) -c $< -o $@ && \
		echo "$(GREEN)✅ Compiled: $<$(RESET)" || \
		(echo "$(RED)❌ Compile failed: $<$(RESET)" && exit 1)

test: $(TEST_BINS)

$(TEST_DIRECTORY)/%: $(TEST_DIRECTORY)/%.c $(HDRS)
	@echo "🧪 Compiling test ${MAGENTA}$<${RESET} ..."
	@$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS) && \
		echo "$(GREEN)✅ Test build successful: $@$(RESET)" || \
		(echo "$(RED)❌ Test build failed: $<$(RESET)" && exit 1)


debug: $(EXECUTABLE)
	@$(DBG) ./${EXECUTABLE}

clean:
	@echo "${MAGENTA}make clean${RESET} $(RM) -r $(EXECUTABLE) $(OBJS) *~ *.bak *.dSYM *.out"
	@$(RM) -r $(EXECUTABLE) $(OBJS) *~ *.bak *.dSYM *.out .*.un~


run: $(EXECUTABLE)
	@make clean
	@make all
	@./$(EXECUTABLE)
