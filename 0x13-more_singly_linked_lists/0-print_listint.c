#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_listint - Prints all the elements of a linked list
  * @h: The head of the linked list
  *
  * Return: The number of nodes of the linked list
  */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	if (h != NULL)
	{
		while (h)
		{
			node++;
			h = h->next;
		}
	}
	return (node);
}

