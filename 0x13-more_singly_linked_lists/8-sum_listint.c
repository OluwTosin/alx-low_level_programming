#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data
 * @head: first node in the linked list
 * Return: 0 if empty
 */
int sum_listint(listint_t *head)
{
int data = 0;
listint_t *temp = head;

while (temp)
{
data += temp->n;
temp = temp->next;
}

return (data);
}
