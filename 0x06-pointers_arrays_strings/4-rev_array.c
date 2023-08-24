#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the array of integers
 * @n: the numbeer of elements
 *
 */

void reverse_array(int *a, int n)
{
int tmpo, ind;

for (ind = n - 1; ind >= n / 2; ind--)
{
tmpo = a[n - 1 - ind];
a[n - 1 - ind] = a[ind];
a[ind] = tmpo;
}
}
