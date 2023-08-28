#include "lists.h"
/**
* lFunction that returns the number of elements
*in ed list_t list
*@h:he list
*Recounter of elements in the list
*/
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
