/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:37:12 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/04 19:44:30 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isnumber(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int	ft_isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

char	changevalues(char c, int capitalize)
{
	if ((capitalize == 1) && (c >= 97 && c <= 122))
	{
		c -= 32;
	}
	if ((capitalize != 1) && (c >= 65 && c <= 90))
	{
		c += 32;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	capitalize;

	capitalize = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if ((ft_isalpha(str[index])) || (isnumber(str[index])))
		{
			str[index] = changevalues(str[index], capitalize);
			capitalize = 0;
		}
		else
		{
			capitalize = 1;
		}
		index++;
	}
	return (str);
}
