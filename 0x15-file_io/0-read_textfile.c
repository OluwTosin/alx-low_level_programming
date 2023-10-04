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
ssize_t t;
ssize_t u;
ssize_t v;

t = open(filename, O_RDONLY);
if (t == -1)
return (0);
bf = malloc(sizeof(char) * letters);
v = read(t, bf, letters);
u = write(STDOUT_FILENO, bf, v);

free(bf);
close(t);
return (u);
}
