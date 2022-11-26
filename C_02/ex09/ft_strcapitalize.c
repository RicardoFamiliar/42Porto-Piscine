/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:57:54 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/03 20:23:53 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
	i++;
	}	
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	primeiraletra;
	int	i;

	ft_strlowcase(str);
	primeiraletra = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (primeiraletra == 1)
			{
			str[i] -= 32;
			primeiraletra = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			primeiraletra = 0;
		else
			primeiraletra = 1;
	i++;
	}	
	return (str);
}
/*int	main()
{
	char	str[] = "teste vamos lula";
	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}*/	
