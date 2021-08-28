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

t_stack	*ft_fill_list(int argc, char **argv)
/*
** this function will take an array of strings
** translate these strings into integers
** and create a linked list off of that array
** every number will be stored in one struct
** first number of the array will be the first struct in linked list
*/
{
	int		i;
	t_stack	*head;
	t_stack	*temp;

	i = 1;
	head = NULL;
	while (i <= argc)
	{
		temp = ft_lst_new(ft_atoi(argv[i]));
		ft_lst_add_back(&head, temp);
		i++;
	}
	return (head);
}
