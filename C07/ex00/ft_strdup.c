/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:13:35 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/12 18:00:57 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <string.h>

int	ft_sizeofarray(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
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

	size = ft_sizeofarray(src);
	dest = (char *)malloc(size + 1);
	if (dest == 0)
		return (0);
	dest = ft_strcpy(dest, src);
	return (dest);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	char *teste;
	char *original;
	if(argc > 1)
	{
		teste = ft_strdup(argv[1]);
		original = strdup(argv[1]);
		printf("%s  ft_strdup: \n" , teste);
		printf("%s  strdup: \n", original);
	}

}
*/
