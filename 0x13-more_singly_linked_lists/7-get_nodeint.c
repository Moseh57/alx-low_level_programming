#include "lists.h"
/**
 * get_nodeint_at_index - a function that finds node at specified index
 * @head: the head node
 * @index: the index of node
 * Return: the node to find
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head != NULL)
		temp = head;
	else
		return (NULL);
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
