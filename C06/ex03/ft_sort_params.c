/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <diegmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 23:24:28 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/13 09:49:53 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	printchar(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		write(1, &s1[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	index;
	int	j;

	argv++;
	argc--;
	if (argc > 1)
	{
		j = 0;
		while (j < (argc * 5))
		{
			index = 0;
			while (index < argc - 1)
			{
				if (ft_strcmp(argv[index], argv[index + 1]) > 0)
					ft_swap(&argv[index], &argv[index + 1]);
				index++;
			}
			j++;
		}
	}
	j = -1;
	while (++j < argc)
		printchar(argv[j]);
}
