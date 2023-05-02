#include "lists.h"
/**
 * free_listint2 - a function that frees a list and sets the head to null
 * @head: the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *te;

	while (head != NULL)
	{
		te = *head;
		temp = te->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
