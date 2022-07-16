/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:57:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/07/16 17:49:28 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert(stack **head, int num)
{
	stack	*new;
	stack	*temp;

	new = (stack *)malloc(sizeof(stack));
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

void	sort(stack **a, stack **b, int ac)
{
	stack	*curr;
	stack	*temp;

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

int	is_sorted(stack *a, int ac)
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
	stack	*b;
	stack	*a;
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

/*void	display(stack *a, stack *b)
{
	stack	*curr = a;
	stack	*temp = b;
	printf("---------------------------------------------------------------------------\n");
	while (temp || curr)
	{
		if(curr)
		{
			printf("%d", curr->num);
			curr = curr->next;
		}
		// // else
		// 	printf("  \n");
		if(temp)
		{
			printf("          %d\n", temp->num);
			temp = temp->next;
		}
		else
			printf("   \n");
	}
	printf("-          - \na          b \n");
	printf("---------------------------------------------------------------------------\n");
} */