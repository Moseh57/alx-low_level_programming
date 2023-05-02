#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a node at an index
 * @head: the head node
 * @idx: the index to insert the node
 * @n: the data for the new node
 * Return: the address of the newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	temp = *head;
	if (*head != NULL && idx != 0)
	{
		for (i = 1; i < idx; i++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	else if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
		return (NULL);
	return (newnode);
}
