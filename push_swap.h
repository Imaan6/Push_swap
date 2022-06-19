/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 06:13:16 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/19 07:19:32 by iel-moha         ###   ########.fr       */
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
	struct Node	*next;
}	stack;

int		ft_atoi(const char *str);
void	swap(stack **a, int i);
int		ft_putstr(char *str);
void	swap_ab(stack **a, stack **b);
void	push(stack **a, stack **b, int i );
void	rotate(stack **a, int i);
void	rotate_ab(stack **a, stack **b);
void	reverse(stack **a, int i);
void	reverse_ab(stack **a, stack **b);
int		check_dups(char **av);

#endif