/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 06:13:16 by iel-moha          #+#    #+#             */
/*   Updated: 2022/07/17 02:56:45 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct Node
{
	int				num;
	int				index;
	struct Node		*next;
}	t_stack;

int		ft_atoi(const char *str);
void	swap(t_stack **a, int i);
int		ft_putstr(char *str);
void	swap_ab(t_stack **a, t_stack **b);
void	push(t_stack **a, t_stack **b, int i );
void	rotate(t_stack **a, int i);
void	rotate_ab(t_stack **a, t_stack **b);
void	reverse(t_stack **a, int i);
void	reverse_ab(t_stack **a, t_stack **b);
int		check_dups(char **av);
void	sort(t_stack **a, t_stack **b, int ac);
void	sort_four(t_stack **a, t_stack **b);
void	sort_three(t_stack **s);
//void	display(t_stack *a, t_stack *b);
void	sort_five(t_stack **a, t_stack **b);
void	radix_sort(t_stack **a, t_stack **b, int ac);
void	insert(t_stack **head, int num);
int		is_digit(char **av);
int		is_sorted(t_stack *a, int ac);
void	error_handling(void);
int*	fill_tab(t_stack *a, int ac);
int*	sort_tab(int* tab, int ac);
void	indexing(t_stack *a, int ac, int* tab);

#endif