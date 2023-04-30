#include "lists.h"
/**
 * listint_len - a function that print no of elements
 * @h: the header node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int i = 0;

	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
