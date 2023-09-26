#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * @h: linked list of type to print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t number;

if (h == NULL)
return (0);
for (number = 0; h != NULL; number++)
{
printf("%d\n", h->n);
h = h->next;
}

return (number);
}
