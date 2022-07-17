/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:11:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/07/17 02:18:43 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **a, int i)
{
	int	temp;

	if ((*a) && (*a)->next)
	{
		temp = (*a)->num;
		(*a)->num = (*a)->next->num;
		(*a)->next->num = temp;
	}
	if (i == 0)
		ft_putstr("sa\n");
	else if (i == 1)
		ft_putstr("sb\n");
}

void	swap_ab(t_stack **a, t_stack **b)
{
	swap(b, 5);
	swap(a, 5);
	ft_putstr("ss\n");
}

//first argument in function push is the stack we push to
int	push(t_stack **a, t_stack **b, int i)
{
	t_stack	*temp;
	t_stack	*pmet;

	if (!*b)
		return ;
	pmet = (*b)->next;
	temp = *a;
	(*a) = (*b);
	(*a)->next = temp;
	(*b) = pmet;
	if (i == 0)
		ft_putstr("pa\n");
	else if (i == 1)
		ft_putstr("pb\n");
}

void	rotate(t_stack **a, int i)
{
	t_stack	*temp;
	t_stack	*pmet;

	if ((*a)->next == NULL)
		return ;
	temp = *a;
	pmet = *a;
	(*a) = temp->next;
	while (pmet->next)
		pmet = pmet->next;
	temp->next = NULL;
	pmet->next = temp;
	if (i == 0)
		ft_putstr("ra\n");
	else if (i == 1)
		ft_putstr("rb\n");
}

void	rotate_ab(t_stack **a, t_stack **b)
{
	rotate(a, 5);
	rotate(b, 5);
	ft_putstr("rr\n");
}
