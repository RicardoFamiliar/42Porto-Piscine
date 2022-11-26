/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:12:12 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/03 22:03:21 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{	
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}	
	while (src[index] != '\0')
	{
		dest[count] = src[index];
		count++;
		index++;
	}
	dest[count] = '\0';
	return (dest);
}

/*int	main()
{
	char	src[] = "testeasasai";
	char	dest[] = "banana";
	
	printf("%s", ft_strcat(dest, src));
}*/	
