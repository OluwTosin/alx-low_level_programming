#include "lists.h"

/**
 * free_listint_safe -pointer that frees a linked list
 * @h: pointer to the first node
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int deter;
listint_t *temp;

if (!h || !*h)
return (0);

while (*h)
{
deter = *h - (*h)->next;
if (deter > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}

*h = NULL;

return (len);
}
