#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning
 * @head: double pointer
 * @str: new string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
unsigned int len = 0;

while (str[len])
len++;

newnode = malloc(sizeof(list_t));
if (!newnode)
return (NULL);

newnode->str = strdup(str);
newnode->len = len;
newnode->next = (*head);
(*head) = newnode;

return (*head);
}
