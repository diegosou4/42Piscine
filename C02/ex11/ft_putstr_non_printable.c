/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:32:30 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/04 19:47:51 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writenotprintablemod(int mod)
{
	if (mod >= 10 && mod <= 16)
	{
		mod += 87;
		write(1, &mod, 1);
	}
	else
	{
		mod += 87;
		write(1, &mod, 1);
	}
}

void	writenotprintablediv(int div)
{
	if (div >= 10 && div <= 16)
	{
		div += 65;
		write(1, &div, 1);
	}
	else
	{
		div += 48;
		write(1, &div, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		div;
	int		mod;
	char	c;

	i = 0;
	c = 92;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			write(1, &c, 1);
			div = str[i] / 16;
			mod = str[i] % 16;
			writenotprintablediv(div);
			writenotprintablemod(mod);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
