/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:11:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/21 10:05:30 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(stack **a, int i)
{   
	int	temp;
	if((*a) && (*a)->next)
    {    
        temp = (*a)->num;
        (*a)->num = (*a)->next->num;
        (*a)->next->num = temp;
    }
	if(i == 0)
		ft_putstr("sa\n");
	else if(i == 1)
		ft_putstr("sb\n");
}

void swap_ab(stack **a, stack**b)
{
    ft_putstr("ss\n");
    swap(b,5);
    swap(a,5);
}

//first argument in function push is the stack we push to
void push(stack **a, stack **b, int i)
{
	stack *temp, *pmet;
	
	if(!(*a))
	{
		pmet = (*b)->next;
		temp = *a;
		(*a) = (*b);
		(*a)->next = temp;
		(*b) = pmet;
	}
	if(i == 0)
		ft_putstr("pa\n");
	else if(i == 1)
		ft_putstr("pb\n");
}

void	rotate(stack **a, int i)
{
	if(i == 0)
		ft_putstr("ra\n");
	else if(i == 1)
		ft_putstr("rb\n");
	stack	*temp, *pmet;
	
	temp = *a;
	pmet = *a; 
	(*a) = temp->next;
	while(pmet->next)
		pmet = pmet->next;
	temp->next = NULL;
	pmet->next = temp;
}

void	rotate_ab(stack **a, stack **b)
{
	ft_putstr("rr\n");
	rotate(a, 5);
	rotate(b, 5);
}

void	reverse(stack **a, int i)
{
	if(i == 0)
		ft_putstr("rra\n");
	else if(i == 1)
		ft_putstr("rrb\n");
	stack *temp, *pmet;

	pmet = *a;
	temp = *a;
	while(temp->next)
	{
		pmet = temp;
		temp = temp->next;
	}
	pmet->next = NULL;
	temp->next = *a;
	*a = temp;
}

void	reverse_ab(stack **a, stack **b)
{
	ft_putstr("rrr\n");
	reverse(a, 5);
	reverse(b, 5);
} 