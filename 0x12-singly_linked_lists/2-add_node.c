#include "lists.h"
#include <string.h>
/**
 * add_node - a function that adds a node to the first node
 * @head: the head node to be added
 * @str: the string content
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
