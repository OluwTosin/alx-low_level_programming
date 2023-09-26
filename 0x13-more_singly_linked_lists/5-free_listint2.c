#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: pointer to the list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *freed;

if (head == NULL)
return;

while (*head)
{
freed = (*head)->next;
free(*head);
*head = freed;
}

*head = NULL;
}
