#include "lists.h"
/**
 * reverse_listint - a function that reverses a linked list
 * @head: the head node
 * Return: the head node of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *next;

	temp = next = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = next;
	}
	*head = temp;
	return (*head);
}
