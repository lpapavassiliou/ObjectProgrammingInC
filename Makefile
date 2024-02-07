# Makefile

# Compiler
CC = gcc

# Source files
SRCS := $(wildcard *.c)

# Build directory
BUILD_DIR := build

# Object files
OBJS := $(patsubst %.c,$(BUILD_DIR)/%.o,$(SRCS))

# Target executable
TARGET = executable

# Compiler flags
CFLAGS = -Wall -Wextra

# Linker flags
LDFLAGS =

# Default target
all: $(BUILD_DIR) $(TARGET)

# Rule to create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $(TARGET)

# Rule to compile source files
$(BUILD_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	$(RM) -r $(BUILD_DIR) $(TARGET)
