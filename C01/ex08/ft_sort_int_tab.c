/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:10:32 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/01 11:00:55 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;
	int	temp;

	c = 0;
	while (c < size)
	{
		i = 0;
		while (i < size - 1)
		{
			j = i + 1;
			if (tab[i] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		c++;
	}
}
