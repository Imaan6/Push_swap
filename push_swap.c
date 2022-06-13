/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:57:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/13 09:01:51 by iel-moha         ###   ########.fr       */
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
	printf("---------------------------------------------------------------------------\n");
	while (curr)
	{
		printf("%d \n", curr->num);
		curr = curr->next;
	}
	printf("- - \n a b \n");
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
		stack *temp;	
		while(i < ac)
		{
			insert(&a, ft_atoi(av[i++]));
			//insert(&b, ft_atoi(av[i++]));
		}
		display(a,b);
		temp = a;
		//swap(&a->num,&a->next->num);
		//display(a,b);
	}
	//display(b);
}