#include "lists.h"
/**
 * delete_nodeint_at_index - a function to delete node at index
 * @head: the head node
 * @index: the index to delete the node
 * Return: 1 if success -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 1; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
