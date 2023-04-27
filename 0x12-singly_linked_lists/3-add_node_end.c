#include "lists.h"
#include <string.h>
/**
 * add_node_end - a function that adds a node to the first node
 * @head: the head node to be added
 * @str: the string content
 * Return: the address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;
	list_t *head2;

	head2 = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	new->len = i;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (head2->next)
	{
		head2 = head2->next;
	}
	head2->next = new;

	return (new);
}
