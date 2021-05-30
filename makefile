# Compiler
CC = g++

# Compiler Flags
CFLAGS = -g -WALL

# Build Target
main: main.o
	$(CC) $(CFLAGS) -o main main.o