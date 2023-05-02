#include "lists.h"
/**
 * sum_listint - a function that prints the sum of a list
 * @head: the head node
 * Return: the sum of the list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
