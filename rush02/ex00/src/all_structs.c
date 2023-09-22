/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_structs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:56:04 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/17 19:56:06 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"
#include "functions.h"
#include <stdlib.h>

void	fill_value(char *value, char *line, int size, int i)
{
	int	j;

	j = 0;
	while (line[i])
	{
		while ((line[i] >= 1 && line[i] < 33) || line[i] > 126)
			i++;
		while (line[i] > 32 && line[i] < 127)
			value[j++] = line[i++];
		if (j < size - 1)
			value[j++] = ' ';
	}
	value[j] = '\0';
}

void	fill_struct(t_dict *dict, char *line, int index)
{
	int	i;
	int	size;

	dict[index].key = ft_atoi(line);
	size = ft_strlength(line);
	dict[index].value = malloc(size);
	i = skip_atoi(line);
	fill_value(dict[index].value, line, size, i);
}

int	check_dict(t_dict *dict, char *line, int index)
{
	long long	key;
	int			i;

	key = ft_atoi(line);
	i = 0;
	while (i < index)
	{
		if (dict[i].key == key)
			return (i);
		i++;
	}
	return (index);
}
