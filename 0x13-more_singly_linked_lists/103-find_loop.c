#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop
 * @head: linked list
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *low = head;
listint_t *last = head;

if (!head)
return (NULL);

while (low && last && last->next)
{
last = last->next->next;
low = low->next;
if (last == low)
{
low = head;
while (low != last)
{
low = low->next;
last = last->next;
}
return (last);
}
}

return (NULL);
}
