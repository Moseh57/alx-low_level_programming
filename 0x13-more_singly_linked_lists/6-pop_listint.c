#include "lists.h"
/**
 * pop_listint - a function that pops the head
 * @head: the head node
 * Return: the head data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	i = temp->n;
	free(temp);
	return (i);
}
