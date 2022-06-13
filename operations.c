/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:11:19 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/13 08:59:22 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(int* a, int* b)
{   
    if(a && b)
    {    
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

// void swap_ab(int *aa, int *ab, int *ba, int *bb)
// {
//     ft_putstr("Exec ss");
//     swap(aa, ab);
//     swap(ba, bb);
// }