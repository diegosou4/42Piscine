/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:51:46 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/18 11:44:40 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define EVEN_MSG  "I have an even number of arguments.\n"
# define ODD_MSG  "I have an odd number of arguments.\n"
# define SUCCESS  0
# define TRUE  1
# define FALSE  0
# define EVEN(nbr) (nbr % 2 == 0)

typedef int	t_bool;

#endif
