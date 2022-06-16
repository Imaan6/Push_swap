/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 06:13:16 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/16 10:48:11 by iel-moha         ###   ########.fr       */
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
void	swap(int* a, int* b);
int		ft_putstr(char *str);
void	swap_ab(int *aa, int *ab, int *ba, int *bb);
void	push(stack **a, stack **b);
void	rotate(stack **a);
void	rotate_ab(stack **a, stack **b);
void	reverse(stack **a);
void	reverse_ab(stack **a, stack **b);
int		check_dups(char **av);

#endif