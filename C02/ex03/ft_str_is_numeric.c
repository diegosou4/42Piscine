/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:26:24 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/04 16:53:15 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	j = 0;
	if (str[0] == '\0')
	{
		i = 1;
	}
	while (str[j] != '\0')
	{
		if (str[j] >= 48 && str[j] <= 57)
		{
			i = 1;
		}
		else
		{
			return (0);
		}
		j++;
	}
	return (i);
}
