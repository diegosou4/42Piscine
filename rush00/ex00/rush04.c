/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <diegmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:38:59 by dde-maga          #+#    #+#             */
/*   Updated: 2023/09/03 16:04:37 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// X E LARGURA
// Y E ALTURAi
void	ft_putchar(char c);

int	auxstart(int tamanholargura, int tamanhoaltura, int x)
{
	if (tamanholargura == 0)
	{
		ft_putchar('A');
		tamanholargura++;
	}
	while (tamanholargura < x - 1)
	{
		ft_putchar('B');
		tamanholargura++;
	}
	tamanhoaltura++;
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
	tamanhoaltura = 1;
	return (tamanhoaltura);
}

int	auxmeio(int tamanholargura, int x, int tamanhoaltura)
{
	tamanholargura = 0;
	if (tamanholargura == 0)
	{
		ft_putchar('B');
		tamanholargura++;
	}
	while (tamanholargura < x - 1)
	{
		ft_putchar(' ');
		tamanholargura++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
	return (tamanhoaltura + 1);
}

void	auxfinal(int tamanholargura, int x)
{
	tamanholargura = 0;
	if (tamanholargura == 0)
	{
		ft_putchar('C');
		tamanholargura++;
	}
	while (tamanholargura < x - 1)
	{
		ft_putchar('B');
		tamanholargura++;
	}
	if (x > 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	tamanhoaltura;
	int	tamanholargura;

	tamanholargura = 0;
	tamanhoaltura = 0;
	tamanhoaltura = auxstart (tamanholargura, tamanhoaltura, x);
	while (tamanhoaltura < y - 1)
	{
		tamanhoaltura = auxmeio(tamanholargura, x, tamanhoaltura);
	}
	if (tamanhoaltura == y - 1)
	{
		auxfinal (tamanholargura, x);
		tamanhoaltura++;
	}
}
