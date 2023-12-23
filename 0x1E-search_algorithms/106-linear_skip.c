#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: list given
 * @value: value to search 
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *n;

	if (list == NULL)
		return (NULL);

	m = list;

	do {
		list = m;
		m = m->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)m->index, m->n);
	} while (m->express && m->n < value);

	if (m->express == NULL)
	{
		list = m;
		while (m->next)
			m = m->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)m->index);

	while (list != m->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
