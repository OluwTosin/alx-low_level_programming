#include "main.h"

/**
 * clear_bit - a function sets the value of a given bit to 0
 * @n: pointer to the number
 * @index: index of the bit to clear
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
