/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:11:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/14 08:45:52 by iel-moha         ###   ########.fr       */
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
	int i;

	i = 0;
	temp = *a;
	pmet = *a;
	while(temp->next)
	{
		temp = temp->next;
		i++;	
	}
	//printf("temp %d \n", temp->num);
	//printf("%d\n", i);
	while(i-1 > 0)
	{
		pmet = pmet->next;
		i--;
	//	printf("%d\n",i);
	}
	//printf("im here pmet %d", pmet->num);
	temp->next = *a;
	pmet->next = NULL;	
}