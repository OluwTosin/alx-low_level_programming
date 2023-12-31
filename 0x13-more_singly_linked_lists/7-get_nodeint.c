#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int l = 0;
listint_t *temp = head;

while (temp && l < index)
{

temp = temp->next;
l++;
}

return (temp ? temp : NULL);
}
