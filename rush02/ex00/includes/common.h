/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:05:23 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/17 20:05:25 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H

struct					s_word
{
	long long			key;
	char				*value;
};

typedef struct s_word	t_dict;

extern int				g_first;

#endif
