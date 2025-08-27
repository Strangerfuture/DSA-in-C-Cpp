# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -O2

# Source files (all .c in current directory)
SRCS := $(wildcard *.c)

# Executables (same name as source, placed in build/)
BINS := $(patsubst %.c,build/%,$(SRCS))

# Default target
all: build $(BINS)

# Rule to build each executable
build/%: %.c | build
	$(CC) $(CFLAGS) -o $@ $<

# Create build directory if it doesn't exist
build:
	mkdir -p build

# Clean build artifacts
clean:
	rm -rf build
