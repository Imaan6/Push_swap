/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:11:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/16 07:34:35 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(int* a, int* b)
{   
	if(a && b)
    {    
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

void swap_ab(int *aa, int *ab, int *ba, int *bb)
{
    ft_putstr("Exec ss");
    swap(aa, ab);
    swap(ba, bb);
}

void push(stack **a, stack **b)
{
	stack *temp, *pmet;
	
	pmet = (*b)->next;
	temp = *a;
	(*a) = (*b);
	(*a)->next = temp;
	(*b) = pmet;
}

void	rotate(stack **a)
{
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
	rotate(a);
	rotate(b);
}

void	reverse(stack **a)
{
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
	reverse(a);
	reverse(b);
} 