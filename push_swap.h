/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 06:13:16 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/13 07:27:18 by iel-moha         ###   ########.fr       */
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

#endif