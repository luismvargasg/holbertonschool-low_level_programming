#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* _HOLBERTON_H_ */
