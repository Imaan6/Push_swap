
#include "push_swap.h"

void	radix_sort(t_stack **a, t_stack **b, int ac)
{
	int		*tab;
	t_stack	*temp;
	int		i;
	int		j;
	int		max_bits;

	tab = malloc((ac) * sizeof(int));
	i = 0;
	temp = *a;
	while (temp)
	{
		tab[i++] = temp->num;
		temp = temp->next;
	}
	i = -1;
	while (++i < ac)
	{
		j = -1;
		while (++j + 1 < ac)
			if (tab[j] > tab[j + 1])
			{
				tab[j] = tab[j + 1] + tab[j];
				tab[j + 1] = tab[j] - tab[j + 1];
				tab[j] = tab[j] - tab[j + 1];
			}
	}
	i = 0;
	while (i < ac)
	{
		temp = *a;
		while (temp)
		{
			temp->index = i + (tab[i] == temp->num);
			if (tab[i] == temp->num)
				break;
			else
				temp = temp->next;
		}
	}
	while ((ac-1 >> max_bits) != 0)
		++max_bits;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		temp = *a;
		while (++j < ac)
			((((temp->index >> i)&1) == 1) && rotate(&temp, 0)) || push(b, &temp, 1);
		(*a) = temp; // this was the problem - this stupid little line of code that I forgot to write >-<"
		while ((*b) != NULL)
			push(a,b,0);
	}
	free(tab);
}