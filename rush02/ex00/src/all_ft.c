/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:54:48 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/17 19:55:00 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"
#include "functions.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	long long	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_strcopy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
}

int	ft_strlength(char *line)
{
	int	i;
	int	count;

	count = 0;
	i = skip_atoi(line);
	count = 0;
	while (line[i] != '\0')
	{
		while ((line[i] >= 1 && line[i] < 33) || line[i] > 126)
			i++;
		if (line[i])
			count++;
		while (line[i] > 32 && line[i] < 127)
		{
			count++;
			i++;
		}
	}
	return (count);
}

long long	ft_atoi(char *str)
{
	long long	sum;
	long long	i;
	long long	signal;

	i = 0;
	sum = 0;
	signal = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		sum *= 10;
		sum += str[i] - 48;
		i++;
	}
	if (signal == -1 && sum != 0)
		return (-2);
	return (sum);
}

void	print_value(long long value, t_dict *words)
{
	int	i;

	i = 0;
	while (words[i].key != -1)
	{
		if (value == words[i].key)
		{
			if (!g_first)
				ft_putstr(" ");
			g_first = 0;
			ft_putstr(words[i].value);
			break ;
		}
		i++;
	}
}
