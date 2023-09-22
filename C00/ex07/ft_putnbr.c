/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:07:06 by diegmore          #+#    #+#             */
/*   Updated: 2023/08/31 14:59:41 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
		i = i + (nb % 10);
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
