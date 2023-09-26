#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end
 * @head: pointer to the first element
 * @n: data to insert
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *thenew;
listint_t *temp = *head;

thenew = malloc(sizeof(listint_t));
if (!thenew)
return (NULL);

thenew->n = n;
thenew->next = NULL;

if (*head == NULL)
{
*head = thenew;
return (thenew);
}

while (temp->next)
temp = temp->next;

temp->next = thenew;

return (thenew);
}
