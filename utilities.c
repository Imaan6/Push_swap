/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:34:42 by iel-moha          #+#    #+#             */
/*   Updated: 2022/07/19 01:05:31 by iel-moha         ###   ########.fr       */
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
	if (r >= 2147483649 && o == -1)
		error_handling();
	else if (r >= 2147483648 && o == 1)
		error_handling();
	return (o * r);
}

void	error_handling(void)
{
	ft_putstr("Error\n");
	exit(2);
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
	int	i;
	int	j;

	i = 1;
	while (av[i + 1])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	is_digit(char **av)
{
	int	i[2];

	i[0] = 0;
	while (av[++i[0]])
	{
		if (av[i[0]][0] == '\0')
			return (0);
		i[1] = 0;
		while (av[i[0]][i[1]] == ' ')
				i[1]++;
		while (av[i[0]][i[1]])
		{
			if (av[i[0]][i[1]] == '-' || av[i[0]][i[1]] == '+')
			{	
				i[1]++;
				if (av[i[0]][i[1]] == '-' || av[i[0]][i[1]] == '+')
					return (0);
			}
			else if ((av[i[0]][i[1]] > 47 && av[i[0]][i[1]] < 58))
				i[1]++;
			else
				return (0);
		}
	}
	return (1);
}
