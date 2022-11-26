/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:04:05 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/03 22:18:15 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{	
	unsigned int	index;
	unsigned int	count;

	index = 0;
	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}	
	while (index < nb && src[index] != '\0')
	{
		dest[count + index] = src[index];
		index++;
	}
	dest[count + index] = '\0';
	return (dest);
}

/*int	main()
{
	char	src[] = "testeasasai";
	char	dest[] = "banana";

	printf("%s", ft_strncat(dest, src, 4));
}*/	
