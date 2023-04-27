#include "lists.h"
/**
 * list_len - a function that prints number of nodes
 * @h: the nodes passed
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
