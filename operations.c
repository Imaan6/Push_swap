/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:11:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/19 05:43:59 by iel-moha         ###   ########.fr       */
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
		ft_putstr("sa ");
	else if(i == 1)
		ft_putstr("sb ");
}

void swap_ab(stack **a, stack**b)
{
    ft_putstr("ss ");
    swap(b,5);
    swap(a,5);
}

void push(stack **a, stack **b, int i)
{
	if(i == 0)
		ft_putstr("pa ");
	else if(i == 1)
		ft_putstr("pb ");
	stack *temp, *pmet;
	
	pmet = (*b)->next;
	temp = *a;
	(*a) = (*b);
	(*a)->next = temp;
	(*b) = pmet;
}

void	rotate(stack **a, int i)
{
	if(i == 0)
		ft_putstr("ra ");
	else if(i == 1)
		ft_putstr("rb ");
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
	ft_putstr("rr ");
	rotate(a, 5);
	rotate(b, 5);
}

void	reverse(stack **a, int i)
{
	if(i == 0)
		ft_putstr("rra ");
	else if(i == 1)
		ft_putstr("rrb ");
	stack *temp, *pmet;

	pmet = *a;
	temp = *a;
	while(temp->next)
	{
		pmet = temp;
		temp = temp->next;
	}
	printf(" temp : %d ", temp->num);
	printf(" pmet %d ", pmet->num);
	pmet->next = NULL;
	temp->next = *a;
	*a = temp;
}

void	reverse_ab(stack **a, stack **b)
{
	ft_putstr("rrr ");
	reverse(a, 5);
	reverse(b, 5);
} 