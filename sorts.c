/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:21:30 by iel-moha          #+#    #+#             */
/*   Updated: 2022/07/11 15:26:23 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_three(stack **s)
{
    int a, b, c;
    a = (*s)->num;
    b = (*s)->next->num;
    c = (*s)->next->next->num;
    if (a > b && b > c && c < a)
    {
        swap(s, 0);
        reverse(s, 0);
    }
    else if (a > b && c > b && c < a)
        rotate(s, 0);
    else if (a > b && c > a && c > b)
        swap(s, 0);
    else if (a < b && b > a && a > c)
        reverse(s, 0);
    else if (a < b && b > c && c > a)
    {
        swap(s, 0);
        rotate(s, 0);
    }
}

// void	sort_three(stack **a)
// {
	
// }

void	sort_four(stack **a, stack **b)
{
    stack *smoll, *temp;\
	int pmet;

    smoll = (*a);
    temp = (*a);
    while (temp)
    {
        if (smoll->num > temp->num)
            smoll = temp;
		pmet = temp->num;
        temp = temp->next;
    }
    if(smoll->num == pmet)
        reverse(a, 0);
    else
    {
        while (smoll->num != (*a)->num)
        {
            rotate(a, 0);
        }
	}
    push(b, a, 1);
    sort_three(a);
    push(a, b, 0);
}

void	sort_five(stack **a, stack **b)
{
	stack *smoll, *temp;
	int pmet;

    smoll = (*a);
    temp = (*a);
    while (temp)
    {
        if (smoll->num > temp->num)
            smoll = temp;
		pmet = temp->num;
        temp = temp->next;
    }
    if(smoll->num == pmet)
        reverse(a, 0);
    else
    {
        while (smoll->num != (*a)->num)
        {
            rotate(a, 0);
        }
	}
    push(b, a, 1);
    sort_four(a, b);
    push(a, b, 0);
}

void	radix_sort(stack **a, stack **b, int ac)
{
	int *tab;
	stack *temp;
	int i, j, z;
    int max_num = ac-1;
    int max_bits = 0;

	//display(*a,*b);
    tab = malloc((ac) * sizeof(int));
	i = 0;
	temp = *a;
	while(temp)
	{
		tab[i++] = temp->num;
		temp = temp->next;
	}

	i = 0;
	while(i < ac)
	{ 
		j = 0;
		while(j+1 < ac)
		{
			if(tab[j] > tab[j+1])
			{
				z = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = z;
			}
			j++;
		}
		i++;
	}
	// i=0;
    // while(i < ac)
    //     printf("%d \n", tab[i++]);

    i = 0;
    while(i < ac)
    {
        temp = *a;
        while(temp)
        {
            if(tab[i] == temp->num)
            {
                temp->index = i++;
                break;
            }
            else
                temp = temp->next;
        }
    }
    
    // printf("Indexs: \n");
    // temp = *a;
    // while(temp)
    // {
    //     printf("%d \n" , temp->index);
    //     temp = temp->next;
    // }
    //printf(" %x \n", 12&23 );
	// while((max_num >> max_bits) != 0)
    // 	printf("%d \n" , ++max_bits);
    // free(tab);
}