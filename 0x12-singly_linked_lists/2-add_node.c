#include "lists.h"
/**
* aode - Adds a new node at the beginning of a linked list
* @heaess to header node.
* @str string of the node.
* Descn: This function adds a new node at the beginning
* of alist.
* Retuhe new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
