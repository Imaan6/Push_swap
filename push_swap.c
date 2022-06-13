/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:57:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/10 12:21:51 by iel-moha         ###   ########.fr       */
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

int main(int ac, char **av)
{
	stack *b= NULL;
	if(ac > 1)
	{
		int	i;
		i = 1;
		stack *temp, *poop;
		stack *a = NULL;
		while(i < ac)
			insert(&a, ft_atoi(av[i++]));
		display(a,b);
		temp = a;
		swap(&temp->num,&temp->next->num);
		display(a,b);
	}
	
	//display(b);
}