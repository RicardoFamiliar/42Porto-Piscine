/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:56:25 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/05 21:00:15 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
	i++;
	}
	return (1);
}
int	main()
{
	printf("%d\n", ft_str_is_lowercase("testando"));
	printf("%d\n", ft_str_is_lowercase("1221121"));
	printf("%d\n", ft_str_is_lowercase("a"));
	printf("%d", ft_str_is_lowercase(""));
}
