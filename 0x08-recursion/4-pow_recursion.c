#include "main.h"

/**
 * _pow_recursion - function that returns the value of raised to the power
 * @x: the current value
 * @y: the raised to power
 * Return: to minus 1
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, (y - 1)));
}
