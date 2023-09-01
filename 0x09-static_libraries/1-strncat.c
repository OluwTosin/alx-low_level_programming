#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: the destination
 * @src: the source
 * @n: number of byte
 * Return: dest:
 */

char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int i;

for (i = 0 ; i < n && *src != '\0' ; i++)
{
dest[len + i] = *src;
src++;
}
dest[len + i] = '\0';
return (dest);
}
