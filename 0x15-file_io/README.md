# 0x15. C - File I/O

This directory contains the tasks of the "0x15. C - File I/O" project at Holberton School.

## General objectives

* How to create, open, close, read and write files.
* What are file descriptors.
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names.
* How to use the I/O system calls open, close, read and write.
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR.
* What are file permissions, and how to set them when creating a file with the open system call.
* What is a system call.
* What is the difference between a function and a system call.

### Basic info

In Unix, a **file descriptor "FD"** is an abstract indicator or handle used to access a file of another I/O resource. FD form part of the POSIX (Portable Operating System Interface) application programming interface. A FD is a non-negative integer **type int in C programming.**

#### Each Unix proccess should expect to have 3 standar POSIX FD, corresponding to the 3 standard streams (preconnected input and output communication channels):


| Integer value   | Name | <unistd.h> symbolic constant | <stdio.h> file stream |
|--------|--------|--------|--------|
| 0 | Standar input | STDIN_FILENO | stdin |
| 1      | Standard output | STDOUT_FILENO | stdout |
| 2      | Standard error | STDERR_FILENO | stderr |
