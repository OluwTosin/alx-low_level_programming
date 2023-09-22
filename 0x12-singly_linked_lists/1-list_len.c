#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * @h: pointer to the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t j = 0;

while (h)
{
j++;
h = h->next;
}
return (j);
}
