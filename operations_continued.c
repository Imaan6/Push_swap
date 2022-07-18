/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_continued.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:32:29 by iel-moha          #+#    #+#             */
/*   Updated: 2022/07/18 12:49:14 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_stack **a, int i)
{
	t_stack	*temp;
	t_stack	*pmet;

	pmet = *a;
	temp = *a;
	while (temp->next)
	{
		pmet = temp;
		temp = temp->next;
	}
	pmet->next = NULL;
	temp->next = *a;
	*a = temp;
	if (i == 0)
		ft_putstr("rra\n");
	else if (i == 1)
		ft_putstr("rrb\n");
}

void	reverse_ab(t_stack **a, t_stack **b)
{
	reverse(a, 5);
	reverse(b, 5);
	ft_putstr("rrr\n");
}

int	*fill_tab(t_stack **a, int ac)
{
	int		*tab;
	t_stack	*temp;
	int		i;

	tab = malloc((ac) * sizeof(int));
	i = 0;
	temp = *a;
	while (temp)
	{
		tab[i++] = temp->num;
		temp = temp->next;
	}
	return (tab);
}

int	*sort_tab(int *tab, int ac)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (j + 1 < ac)
		{
			if (tab[j] > tab[j + 1])
			{
				z = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = z;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

void	indexing(t_stack **a, int ac, int *tab)
{
	int		i;
	t_stack	*temp;

	temp = *a;
	i = 0;
	while (i < ac)
	{
		temp = *a;
		while (temp)
		{
			if (tab[i] == temp->num)
			{
				temp->index = i++;
				break ;
			}
			else
				temp = temp->next;
		}
	}
	free (tab);
}
