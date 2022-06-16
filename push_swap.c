/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:57:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/15 11:14:15 by iel-moha         ###   ########.fr       */
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
	while (curr || temp)
	{
		if(curr)
		{
			printf("%d", curr->num);
			curr = curr->next;	
		}
		// else
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
	if(ac > 1)
	{
		int	i;
		i = 1;	
		while(i < ac)
		{
			insert(&a, ft_atoi(av[i++]));
			//insert(&b, ft_atoi(av[i++]));
		}
		insert(&b, 0);
		insert(&b, 6);
		insert(&b, 7);
		insert(&b, 8);
		display(a,b);
		//push(&a,&b);
		reverse_ab(&a,&b);
		// swap(&a->num,&a->next->num);
		//swap_ab(&a->num,&a->next->num,&b->num,&b->next->num);
		display(a,b);
	}
	//display(b);
}