#include "lists.h"

/**
 * listint_len - singly list function
 * That returns the number of elements in a linked listint_t list
 * @h: listint_h member passed as parameter
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	count++;
	h = (*h).next;
	}
	return (count);
}
