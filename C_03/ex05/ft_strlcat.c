/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:28:53 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/04 19:41:28 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	destl;
	unsigned int	strl;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	strl = ft_strlen(src);
	destl = x;
	if (size == 0 || size <= destl)
		return (strl + size);
	while (src[i] != '\0' && i < size - destl - 1)
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (destl + strl);
}
/*int main (void)
{
	char src[] = "teste ";
	char dest [] = "vamos";
	printf("%i \n", ft_strlcat(dest, src, 20));
	printf("%s \n", dest);
}*/
