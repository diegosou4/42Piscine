/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:50:36 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/12 16:24:48 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}