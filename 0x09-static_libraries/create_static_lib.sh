#!/bin/bash

# Compile all .c files in the current directory to object files
gcc -c *.c

# Create the static library liball.a from the object files
ar -rc liball.a *.o

# Update the library's index
ranlib liball.a

# Clean up the temporary object files
rm -f *.o

