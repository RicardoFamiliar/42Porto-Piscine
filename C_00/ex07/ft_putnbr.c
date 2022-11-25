/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:06:15 by ricada-s          #+#    #+#             */
/*   Updated: 2022/09/26 22:26:19 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putc(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb = 147483648;
		ft_putc('-');
		ft_putc('2');
	}
	if (nb < 0)
	{
		ft_putc('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr((nb / 10));
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putc(nb + 48);
	}
}

/*int	main(void)
{
	ft_putnbr(-27483648);
	return (0);
}*/
