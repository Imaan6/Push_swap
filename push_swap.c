/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:57:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/21 07:52:04 by iel-moha         ###   ########.fr       */
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
	if(head)
	{
		if (!(*head))
		{
			*head = new;
			return ;
		}
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

void	display(stack *a, stack *b)
{
	stack *curr = a;
	stack *temp = b;
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
}

int	main(int ac, char **av)
{
	stack *b = NULL;
	stack *a = NULL;
	if(ac > 1 && check_dups(av))
	{
		int	i;
		i = 1;	
		while(i < ac)
		{
			insert(&a, ft_atoi(av[i++]));
		}
		display(a, b);
		push(&a, &b, 1);
		display(a, b);
	}
}