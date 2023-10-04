#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that read text file print to STDOUT.
 * @filename: text fileto be read
 * @letters: number of letters it could read and print
 * Return: 0 if filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *bf;
ssize_t fd;
ssize_t u;
ssize_t v;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
bf = malloc(sizeof(char) * letters);
v = read(fd, bf, letters);
u = write(STDOUT_FILENO, bf, v);

free(bf);
close(fd);
return (u);
}
