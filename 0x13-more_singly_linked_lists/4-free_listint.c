#include "lists.h"
/**
 * free_listint - a function that frees a list
 * @head: the head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		free(head);
		return;
	}
	temp = head;
	while (temp != NULL)
	{
		head = temp;
		free(head);
		temp = temp->next;
	}
}
