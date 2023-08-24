#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * @x: the pointer
 * Return: pointer tp uppercase
 */

char *string_toupper(char *x)
{
int i;

i = 0;
while (x[i] != '\0')
{
if (x[i] >= 'a' && x[i] <= 'b')
x[i] = x[i] - 32;
i++;
}
return (x);
}
