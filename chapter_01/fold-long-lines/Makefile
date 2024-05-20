# Makefile

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Target executable
TARGET = fold-long-lines.out

# Source files
SRC_DIR = chapter_01/fold-long-lines

# Rule to build the target
$(TARGET): $(SRC_DIR)/main.o
	$(CC) $(CFLAGS) -o $(SRC_DIR)/$(TARGET) $(SRC_DIR)/main.o

# Rule to build the object file
$(SRC_DIR)/main.o: $(SRC_DIR)/main.c chapter_01/constants.h
	$(CC) $(CFLAGS) -Ichapter_01 -c $(SRC_DIR)/main.c -o $(SRC_DIR)/main.o

# Clean up the build files
clean:
	rm -f $(SRC_DIR)/$(TARGET) $(SRC_DIR)/main.o
