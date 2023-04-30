#include "lists.h"
/**
 * add_nodeint - a function that adds a node at the begining of a list
 * @head: the head node
 * @n: the data to insert into the node
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else if (*head != NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	if (head == NULL)
		return (NULL);
	return (*head);
}
