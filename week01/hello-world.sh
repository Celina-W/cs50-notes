#!/bin/bash

# clang = compiles c source code into machine code that the computer can run
  # clang will generate a file (often called "a.out", a being the first letter
  # of the alphabet and out being output) that has the executable machine code
clang hello-world.c

# . = current directory
# a.out = file to run
./a.out

# compile hello-world, then output (denoted by -o) a machine code file named
# hello instead of a.out
clang -o hello hello-world.c

# ls = list files in current directory
  # the files listed that are color coded green with an asterisk next to them
  # are the executable files (EX: a.out* hello* hello-world.c)
ls

# mkdir = make a directory
mkdir pset1

# cd = change directory
cd pset1

# .. = parent directory
cd ..

# rmdir = delete directory
rmdir pset1

# make is a popular command that you have to install
# included in make is the ability to compile code
# make compiles a machine code file named after the original
make hello-world.c
