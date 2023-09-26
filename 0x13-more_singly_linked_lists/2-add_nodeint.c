#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: pointer to the first node
 * @n: data to insert
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *now;

now = malloc(sizeof(listint_t));
if (!now)
return (NULL);

now->n = n;
now->next = *head;
*head = now;

return (now);
}
