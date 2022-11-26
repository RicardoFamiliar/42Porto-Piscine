/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:17:01 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/02 18:28:16 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
	i++;
	}
	return (1);
}
/*int	main()
{
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("12`~21"));
	printf("%d\n", ft_str_is_printable("TES\aTE"));
	printf("%d", ft_str_is_printable("TESTE"));
}*/
