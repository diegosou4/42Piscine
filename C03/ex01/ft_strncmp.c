/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:49:28 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/07 10:46:33 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main()
{
	 char array[] = "aaijj";
        char array1[] = "aa";
	unsigned int b; 
	b = 4;
        printf("%d : ft_strncmp \n", ft_strncmp(array, array1,3));
        printf("%d : strncpm \n", strncmp(array,array1,2));
        char array2[] = "dcdsds";
        char array3[] = "ddss";
	b = 2;
        printf("%d : ft_strncmp \n", ft_strncmp(array2, array3,b));
        printf("%d : strncpm \n ", strncmp(array2,array3,b));

}
*/
