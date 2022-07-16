/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_continued.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:32:29 by iel-moha          #+#    #+#             */
/*   Updated: 2022/07/16 17:33:49 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(stack **a, int i)
{
	stack	*temp;
	stack	*pmet;

	pmet = *a;
	temp = *a;
	while (temp->next)
	{
		pmet = temp;
		temp = temp->next;
	}
	pmet->next = NULL;
	temp->next = *a;
	*a = temp;
	if (i == 0)
		ft_putstr("rra\n");
	else if (i == 1)
		ft_putstr("rrb\n");
}

void	reverse_ab(stack **a, stack **b)
{
	reverse(a, 5);
	reverse(b, 5);
	ft_putstr("rrr\n");
}
