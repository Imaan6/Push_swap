/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:57:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/21 11:06:10 by iel-moha         ###   ########.fr       */
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

void	sort_three(stack **s)
{
	int a, b, c;
	a = (*s)->num;
	b = (*s)->next->num;
	c = (*s)->next->next->num; 
	printf("Im here");
	if(a > b && b > c)
	{
		swap(s, 0);
		reverse(s, 0);
	}	
}

void	sort(stack **a, int ac)
{
	stack *curr, *temp;

	temp = *a;
	curr = *a;
	if(ac == 3)
	{
		if(temp->num > temp->next->num)
			swap(a, 0);
	}
	else if(ac == 4)
	{
		sort_three(a);
	}
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
		//push(&a, &b, 1);
		sort(&a, ac);
		//swap(&a, 0);
		//rotate(&a, 0);
		//swap(&a, 0);
		//reverse(&a, 0);
		display(a, b);
	}
}