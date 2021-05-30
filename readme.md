# Compile Commands
g++ -Wall -Wextra -Werror -c main.cpp main.o
g++ main.o -o main.exe

# Outputting to Image
main.exe > image.ppm

# TODO:
Fix makefile