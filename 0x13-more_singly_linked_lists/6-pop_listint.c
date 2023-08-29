#include "lists.h"

/**
 * pint - deletes the head node of a linked list
 * @d: pointer to the first element in the linked list
 *
 * Rn: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
