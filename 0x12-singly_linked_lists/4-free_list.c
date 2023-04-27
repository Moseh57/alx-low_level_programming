#include "lists.h"
/**
 * free_list - a function that frees a linked list
 * @head: the nodes
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
