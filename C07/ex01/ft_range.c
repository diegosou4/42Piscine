/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:58:56 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/14 14:35:15 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	sum;
	int	*array;
	int	i;

	sum = max - min;
	i = 0;
	array = (int *)malloc(sum * 4);
	if (min >= max)
		return (0);
	if (array == 0)
		return (0);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	int	*array;

	array = ft_range(14, 15);
	printf("%i :", array[0]);
}*/
