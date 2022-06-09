/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:57:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/09 11:16:33 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert(stack **head, int num)
{
	stack	*new;

	new = (stack *)malloc(sizeof(stack));
	if(new)
	{
		new->num = num;
		new->next = *head;
		*head = new;
	}
}

void	display(stack *a)
{
	stack *curr = a;
	while (curr)
	{
		printf("%d-->", curr->num);
		curr = curr->next;
	}
	printf("NULL");
}

int main(int ac, char **av)
{
	if(ac > 1)
	{
		int	i;
		i = 1;
		stack *a = NULL;
		while(i < ac)
			insert(&a, ft_atoi(av[i++]));
		display(a);
		printf("\n"); 
	}
	stack *b= NULL;
	display(b);
}