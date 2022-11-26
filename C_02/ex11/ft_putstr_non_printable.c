/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:38:23 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/03 20:47:08 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 32 && str[a] <= 126)
		{
			write(1, &str[a], 1);
		}
		else
		{
			write (1, "\\", 1);
			write (1, &"0123456789abcdef"[str[a] / 16], 1);
			write (1, &"0123456789abcdef"[str[a] % 16], 1);
		}
	a++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("testandop \n e mais \t bar  \0 ra ");
	ft_putstr_non_printable("");
}
