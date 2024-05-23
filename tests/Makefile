# To compile all files and create a library: make all
# To run all tests: make test
# To run specific test: ./test_atoi.o

# Variables
SRC_DIR = ..
TEST_DIR = .
LIB_NAME = libft.a
CC = cc
# For Linux: CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source and object files
SRC_FILES = $(wildcard $(SRC_DIR)/ft_*.c)
OBJ_FILES = $(SRC_FILES:.c=.o)

# Test files
TEST_FILES = $(wildcard $(TEST_DIR)/test_*.c)
TEST_BINARIES = $(TEST_FILES:.c=.o)

# Rules
all: $(LIB_NAME)

# Create the library from object files
$(LIB_NAME): $(OBJ_FILES)
	ar rcs $@ $^

# Compile object files from source files
$(OBJ_FILES): $(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Compile and run each test
test: $(LIB_NAME) $(TEST_BINARIES)
	@for test in $(TEST_BINARIES); do \
		echo ""; \
		echo "\033[1;32mRunning $$test...\033[0m"; \
		echo ""; \
		./$$test; \
	done

# Compile test binaries
$(TEST_BINARIES): $(TEST_DIR)/%.o: $(TEST_DIR)/%.c $(LIB_NAME)
	$(CC) $(CFLAGS) -o $@ $< -L. -lft
#For linux: 	$(CC) $(CFLAGS) -o $@ $< -L. -lft -lbsd

# Clean up object files, library, and test binaries
clean:
	rm -rf $(OBJ_FILES) $(TEST_BINARIES)

fclean: clean
	rm -rf $(LIB_NAME)

re: fclean all

.PHONY: all test clean fclean re

