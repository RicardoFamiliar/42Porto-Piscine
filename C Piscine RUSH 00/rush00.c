/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:55:42 by ricada-s          #+#    #+#             */
/*   Updated: 2022/09/25 00:53:14 by jdas-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x)
{
	int	indice_first_line;

	indice_first_line = 2;
	ft_putchar('o');
	while (indice_first_line < x)
	{
		ft_putchar('-');
		indice_first_line++;
	}
	if (indice_first_line == x)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	middle_row(int x)
{
	int	indice_middle_row;

	indice_middle_row = 1;
	while (indice_middle_row <= x)
	{
		if (indice_middle_row == 1 || indice_middle_row == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		indice_middle_row++;
	}
	ft_putchar('\n');
}

void	last_line(int x)
{
	int	indice_last_line;

	indice_last_line = 2;
	ft_putchar('o');
	while (indice_last_line < x)
	{
		ft_putchar('-');
		indice_last_line++;
	}
	if (indice_last_line == x)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	indice;

	indice = 2;
	if (x <= 0 || y <= 0)
	{
		write(1, "Both numbers must be above 0\n", 29);
	}
	else
	{
		first_line(x);
		while (indice < y)
		{
			middle_row(x);
			indice++;
		}
		if (y > 1)
		{
			last_line(x);
		}
	}
}
