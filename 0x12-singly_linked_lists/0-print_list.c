#include "lists.h"
#include <stdio.h>
/**
 * print_list - a function that prints the contents of a list
 * @h: the nodes
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
			h = h->next;
			i++;
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
