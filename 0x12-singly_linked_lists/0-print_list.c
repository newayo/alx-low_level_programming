#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints a singly linked list
 * @h: pointer to head of singly linked list
 * Return: Number of elements in list
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
