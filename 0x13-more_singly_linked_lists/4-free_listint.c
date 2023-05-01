#include "lists.h"
/**
 * free_listint - a function that frees a list
 * @head: the head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	temp = head;
	while (temp != NULL)
	{
		temp2 = temp;
		free(temp2);
		temp = temp->next;
	}
}
