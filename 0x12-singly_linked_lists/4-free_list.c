#include "lists.h"
/**
* fre function
* @hepointer address to header node.
* Desption: This function frees a list_t list.
* Retothing.
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);

}
