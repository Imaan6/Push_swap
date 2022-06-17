/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:34:42 by iel-moha          #+#    #+#             */
/*   Updated: 2022/06/17 09:32:23 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	unsigned long	r;
	int				i;
	int				o;

	i = 0;
	r = 0;
	o = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			o = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	if (r >= 9223372036854775807 && o == -1)
		return (0);
	else if (r >= 9223372036854775807 && o == 1)
		return (-1);
	return (o * r);
}
int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return (ft_putstr("(null)"));
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	check_dups(char **av)
{
	int i , j;
	i = 1;
	while(av[i+1])
	{
		j=i+1;
		while(av[j])
		{
			//printf("%d ", ft_atoi(av[j]));
			if(ft_atoi(av[i])==ft_atoi(av[j]))
			{
				printf("dup %d\n", ft_atoi(av[i]));
				return (0);
			}
			j++;
			}
		i++;
	}
	return (1);
}