#include "lists.h"

/**
 * frstint - frees a linked list
 * @h: lnt_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
