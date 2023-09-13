#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - it prints the name
 * @name: the name to be printed
 * @f: the function
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
