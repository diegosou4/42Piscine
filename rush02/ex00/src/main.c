/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:56:38 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/17 19:57:06 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"
#include "functions.h"
#include <stdlib.h>

int			g_first = 1;

long long	*make_divisors(void)
{
	long long	*divisors;

	divisors = malloc(sizeof(long long) * 9);
	if (!divisors)
		return (NULL);
	divisors[0] = 1000000000000000000;
	divisors[1] = 1000000000000000;
	divisors[2] = 1000000000000;
	divisors[3] = 1000000000;
	divisors[4] = 1000000;
	divisors[5] = 1000;
	divisors[6] = 100;
	divisors[7] = 10;
	divisors[8] = 1;
	return (divisors);
}

void	free_dict(t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].key != -1)
	{
		free(dict[i].value);
		i++;
	}
	free(dict);
}

int	ft_error(void)
{
	ft_putstr("Dict Error\n");
	return (1);
}

int	ft_1error(void)
{
	ft_putstr("Error\n");
	return (1);
}

int	main(int argc, char **argv)
{
	long long	*divisors;
	long long	number;
	char		*dictname;
	t_dict		*dict;

	dictname = "numbers.dict";
	number = ft_atoi(argv[1]);
	if (argc == 3)
	{
		dictname = argv[1];
		number = ft_atoi(argv[2]);
	}
	if ((argc != 2 && argc != 3) || number < 0)
		return (ft_1error());
	divisors = make_divisors();
	dict = parse_dict(dictname);
	if (dict == NULL)
		return (ft_error());
	print_name(number, dict, divisors);
	ft_putstr("\n");
	free_dict(dict);
	return (0);
}
