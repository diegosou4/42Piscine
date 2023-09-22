/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:56:23 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/04 14:19:40 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(int num)
{
	char	array[];

	array[] = "abcdef";
	if (num >= 10 && num <= 16)
	{
		return (array[num - 10]);
	}
	return (num + '0');
}

int	ft_pint_non_printable(char str)
{
	if (str >= 0 && str <= 31)
	{
		return (1);
	}
	return (0);
}

void	ft_printchar(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = '.';
	while (str[i] != '\0')
	{
		if (ft_pint_non_printable(str[i]))
		{
			write(1, &c, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

void	ft_putstr_non_printable(char *memory, char *str)
{
	int		i;
	int		div;
	int		mod;
	char	print;

	i = 0;
	while (memory[i] != '\0')
	{
		div = memory[i] / 16;
		mod = memory[i] % 16;
		print = ft_putchar(div);
		write(1, &print, 1);
		print = ft_putchar(mod);
		write(1, &print, 1);
		i++;
	}
	print = 58;
	write(1, &print, 1);
	ft_printchar(" ");
	i = 0;
	while (str[i] != '\0')
	{
		div = str[i] / 16;
		mod = str[i] % 16;
		print = ft_putchar(div);
		write(1, &print, 1);
		print = ft_putchar(mod);
		write(1, &print, 1);
		i++;
		if (i % 2 == 0)
		{
			ft_printchar(" ");
		}
	}
	i = 0;
	ft_printchar(" ");
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
