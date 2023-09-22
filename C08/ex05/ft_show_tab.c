/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:02:58 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/19 11:27:29 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int	is_negative(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		write(1, "147483648", 9);
		return ;
	}
	nb = is_negative(nb);
	if (nb > 9)
	{
		i += (nb % 10);
		ft_putnbr(nb / 10);
		i = i + '0';
		write(1, &i, 1);
		return ;
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int			k;

	k = 0;
	while (par[k].str)
	{
		ft_putstr(par[k].str);
		ft_putnbr(par[k].size);
		write(1, "\n", 1);
		ft_putstr(par[k].copy);
		k++;
	}
}
