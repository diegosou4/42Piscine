/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_dict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:54:01 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/17 19:54:16 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"
#include "functions.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

t_dict	*parse_dict(char *filename)
{
	t_dict	*dict;
	int		size;

	size = count_lines(filename);
	dict = malloc(sizeof(t_dict) * (size + 1));
	if (fill_dict(dict, filename) == 0)
		return (NULL);
	return (dict);
}

int	is_key(long long value, t_dict words[])
{
	int	i;

	i = 0;
	while (words[i].key != -1)
	{
		if (value == words[i].key)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_readline(int fd)
{
	int		ret;
	char	*old;
	char	*new;
	int		i;

	i = 0;
	old = malloc(i + 2);
	ret = read(fd, old, 1);
	if (ret == 0)
	{
		free(old);
		return (NULL);
	}
	while (ret == 1 && old[i++] != '\n')
	{
		new = malloc(i + 2);
		ft_strcopy(new, old);
		free(old);
		old = new;
		ret = read(fd, &(old[i]), 1);
	}
	if (ret == 0)
		return (NULL);
	old[i] = 0;
	return (old);
}

int	count_lines(char *filename)
{
	int		fd;
	int		line_count;
	char	*s;

	line_count = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	line_count = 0;
	s = ft_readline(fd);
	if (s != NULL && s[0] != '\n')
		line_count++;
	while (s != NULL)
	{
		free(s);
		s = ft_readline(fd);
		if (s != NULL && s[0] != '\n')
			line_count++;
	}
	free(s);
	close(fd);
	return (line_count);
}

int	fill_dict(t_dict *dict, char *filename)
{
	int		i;
	int		fd;
	int		j;
	char	*s;

	i = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	s = ft_readline(fd);
	while (s != NULL)
	{
		j = check_dict(dict, s, i);
		if (s != NULL && j != i)
			fill_struct(dict, s, j);
		else if (s != NULL && s[0] != '\n')
			fill_struct(dict, s, i++);
		free(s);
		s = ft_readline(fd);
	}
	free(s);
	dict[i].key = -1;
	return (1);
}
