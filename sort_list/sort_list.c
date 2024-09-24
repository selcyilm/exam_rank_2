#include "list.h"
#include <unistd.h>
#include <stdbool.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *current;
	int		tmp;
	bool	sorted;

	if (!lst)
		return (0);
	sorted = false;
	current = lst;
	while (!sorted)
	{
		sorted = true;
		current = lst;
		while (current->next)
		{
			if (!cmp(current->data, current->next->data))
			{
				tmp = current->data;
				current->data = current->next->data;
				current->next->data = tmp;
				sorted = false;
			}
			current = current->next;
		}
	}
	return (lst);
}
