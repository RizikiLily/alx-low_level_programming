#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all eleements
 * @h: head of the linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		count++;
		
	}
	return (count);
}
