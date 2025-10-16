# meta-cat

A minimal implementation of the Linux cat command designed for learning file I/O and system programming.

### Description

meta-cat is a simple tool that replicates the basic functionality of the Unix cat command. It reads files sequentially and outputs their contents to the standard output, serving as an educational example for understanding file input/output and low-level system programming concepts.

### Features

- Reads and prints files to the console
- Handles multiple files in the specified order
- Demonstrates basic file handling and error checking in Linux environment

### Usage

meta-cat [file1] [file2] ...

If no file is specified, it reads from standard input.

### Requirements

- Linux operating system
- Basic C compiler (gcc)

### Building

Compile the program using:

    gcc -o meta-cat meta-cat.c

### License

GNU public license version 3
