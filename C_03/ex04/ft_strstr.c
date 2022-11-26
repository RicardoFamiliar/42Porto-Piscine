/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:26:37 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/04 19:44:48 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[x] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
		{
			x++;
			if (to_find[x] == '\0')
				return (str + i);
		}
		i++;
		x = 0;
	}
	return (0);
}
/*int	main()
{
	char str[] = "Teste Cuidado vamos Na Fé ";
	char find[] = "vamos";
	printf("%s", ft_strstr(str, find));
}*/
