/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:33:08 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/20 15:34:52 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	length_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (i);
}

int	ishavetwochar(char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == base[index + 1])
			return (1);
		index++;
	}
	return (0);
}

void	arrayforhex(int nbr, int whatbase, char *base)
{
	char	array[34];
	int		i;
	int		lengthforhex;

	i = 0;
	lengthforhex = 0;
	while (nbr > 0)
	{
		array[i] = base[nbr % whatbase];
		nbr = nbr / whatbase;
		i++;
	}
	array[i] = '\0';
	lengthforhex = length_base(array);
	while (lengthforhex != 0)
	{
		write(1, &array[lengthforhex - 1], 1);
		lengthforhex--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	whatbase;

	whatbase = length_base(base);
	if (ishavetwochar(base))
		return ;
	if (whatbase <= 1)
		return ;
	arrayforhex(nbr, whatbase, base);
}

int main()
{
	ft_putnbr_base(42,"01");


}
