/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:57:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/07/19 01:35:39 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert(t_stack **head, int num)
{
	t_stack	*new;
	t_stack	*temp;

	new = (t_stack *)malloc(sizeof(t_stack));
	temp = *head;
	new->num = num;
	new->next = NULL;
	if (head)
	{
		if (!(*head))
		{
			*head = new;
			return ;
		}
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

void	sort(t_stack **a, t_stack **b, int ac)
{
	t_stack	*curr;
	t_stack	*temp;

	temp = *a;
	curr = *a;
	if (ac == 3)
	{
		if (temp->num > temp->next->num)
			swap(a, 0);
	}
	else if (ac == 4)
		sort_three(a);
	else if (ac == 5)
		sort_four(a, b);
	else if (ac == 6)
		sort_five(a, b);
	else if (ac > 6)
		radix_sort(a, b, ac - 1);
}

int	is_sorted(t_stack *a, int ac)
{
	int	i;

	i = 1;
	while (a && a->next)
	{
		if (a->next && a->num < a->next->num)
			i++;
		a = a->next;
	}
	return (i == ac - 1);
}

int	main(int ac, char **av)
{
	t_stack	*b;
	t_stack	*a;
	int		i;

	b = NULL;
	a = NULL;
	if (ac > 1 && check_dups(av) && is_digit(av) == 1)
	{
		i = 1;
		while (i < ac)
			insert(&a, ft_atoi(av[i++]));
		if (!is_sorted(a, ac))
			sort(&a, &b, ac);
	}
	if (!a)
		ft_putstr("Error\n");
}
