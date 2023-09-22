/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_name.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:55:30 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/17 19:55:38 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"
#include "functions.h"
#include <stdlib.h>

void	print_name(long long nbr, t_dict *words, long long divisors[])
{
	long long	max_divisor;

	if (is_key(nbr, words))
	{
		if (nbr == find_divisor(nbr, words, divisors) && nbr > 10)
			print_value(1, words);
		print_value(nbr, words);
		return ;
	}
	max_divisor = find_divisor(nbr, words, divisors);
	if (is_key((nbr / max_divisor) * max_divisor, words))
	{
		if ((nbr / max_divisor) * max_divisor == max_divisor)
			print_value(1, words);
		print_value((nbr / max_divisor) * max_divisor, words);
	}
	else
	{
		print_name(nbr / max_divisor, words, divisors);
		print_value(max_divisor, words);
	}
	if (nbr % max_divisor != 0)
		print_name(nbr % max_divisor, words, divisors);
}

long long	find_divisor(long long nbr, t_dict *words, long long divisors[])
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (nbr >= divisors[i] && is_key(divisors[i], words))
		{
			return (divisors[i]);
		}
		i++;
	}
	return (1);
}

int	skip_atoi(char *line)
{
	int	i;

	i = 0;
	while ((line[i] >= 9 && line[i] <= 13) || line[i] == 32)
		i++;
	while (line[i] == '-' || line[i] == '+')
		i++;
	while (line[i] >= 48 && line[i] <= 57)
		i++;
	while ((line[i] >= 9 && line[i] <= 13) || line[i] == 32 || line[i] == ':')
		i++;
	return (i);
}
