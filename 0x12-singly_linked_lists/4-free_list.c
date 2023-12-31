#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function frees a list
 * @head: list_t
 */
void free_list(list_t *head)
{
list_t *link;

while (head)
{
link = head->next;
free(head->str);
free(head);
head = link;
}
}
