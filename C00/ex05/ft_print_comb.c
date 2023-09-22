/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:05:28 by diegmore          #+#    #+#             */
/*   Updated: 2023/08/30 13:39:31 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char i, char j, char h)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &h, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	h;

	i = 48;
	while (i < 56)
	{
		j = i + 1;
		while (j < 57)
		{
			h = j + 1;
			while (h <= 57)
			{
				ft_print_numbers(i, j, h);
				h++;
				if (i < 55)
				{
					write(1, ", ", 2);
				}
			}
			j++;
		}
		i++;
	}
}
