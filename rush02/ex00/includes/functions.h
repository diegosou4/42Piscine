/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:05:41 by diegmore          #+#    #+#             */
/*   Updated: 2023/09/17 20:05:51 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include "common.h"

void		ft_putstr(char *str);
void		ft_strcopy(char *dest, char *src);
int			ft_strlength(char *line);
long long	ft_atoi(char *str);
void		print_value(long long value, t_dict *words);
int			is_key(long long value, t_dict words[]);
char		*ft_readline(int fd);
int			count_lines(char *filename);
long long	find_divisor(long long nbr, t_dict *words, long long divisors[]);
int			skip_atoi(char *line);
void		print_name(long long nbr, t_dict *words, long long divisors[]);
void		fill_value(char *value, char *line, int size, int i);
void		fill_struct(t_dict *dict, char *line, int index);
int			check_dict(t_dict *dict, char *line, int index);
int			fill_dict(t_dict *dict, char *filename);
t_dict		*parse_dict(char *filename);

#endif
