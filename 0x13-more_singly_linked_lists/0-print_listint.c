#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints elements of a list and number
 * @h: the head node
 * Return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int i = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
