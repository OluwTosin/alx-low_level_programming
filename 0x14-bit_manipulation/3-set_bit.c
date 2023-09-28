#include "main.h"

/**
 * set_bit - a function that sets a bit to 1
 * @n: number to change
 * @index: index of the bit to starting from 0
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
