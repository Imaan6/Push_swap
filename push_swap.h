/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 06:13:16 by iel-moha          #+#    #+#             */
/*   Updated: 2022/07/15 18:23:57 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct Node
{
	int     num;
	int		index;
	struct Node	*next;
}	stack;

unsigned long		ft_atoi(const char *str);
void	swap(stack **a, int i);
int		ft_putstr(char *str);
void	swap_ab(stack **a, stack **b);
void	push(stack **a, stack **b, int i );
void	rotate(stack **a, int i);
void	rotate_ab(stack **a, stack **b);
void	reverse(stack **a, int i);
void	reverse_ab(stack **a, stack **b);
int		check_dups(char **av);
void	sort(stack **a, stack **b, int ac);
void	sort_four(stack **a, stack **b);
void	sort_three(stack **s);
void	display(stack *a, stack *b);
void	sort_five(stack **a, stack **b);
void	radix_sort(stack **a, stack **b, int ac);
void	insert(stack **head, int num);
int		is_digit(char **av);
int		is_sorted(stack *a, int ac);

#endif