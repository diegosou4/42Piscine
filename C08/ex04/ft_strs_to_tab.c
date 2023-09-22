/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:14:36 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/18 19:31:26 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_arraylength(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;

	size = ft_arraylength(src);
	dest = (char *)malloc(size + 1);
	if (dest == 0)
		return (0);
	dest = ft_strcpy(dest, src);
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s;
	int			j;
	int			size;

	j = 0;
	s = malloc(sizeof(t_stock_str) * (ac + 1));
	if (s == 0)
	{
		return (0);
	}
	while (j < (ac))
	{
		size = ft_arraylength(av[j]);
		s[j].size = size;
		s[j].str = (char *)malloc(size + 1);
		s[j].str = ft_strcpy(s[j].str, av[j]);
		s[j].copy = ft_strdup(s[j].str);
		j++;
	}
	s[j].size = 0;
	s[j].str = 0;
	s[j].copy = 0;
	return (s);
}
