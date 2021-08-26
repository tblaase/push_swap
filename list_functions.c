#include "push_swap.h"

t_stack	*ft_lst_new(int content)
/*
** same function as libft function but different struct it uses
*/
{
	t_stack	*head;

	head = malloc(sizeof(t_stack));
	if (head == NULL)
		return (0);
	head->content = content;
	head->next = NULL;
	return (head);
}

void	ft_lst_add_back(t_stack **head, t_stack *new)
/*
** same function as libft function but different struct it uses
*/
{
	t_stack	*current;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
