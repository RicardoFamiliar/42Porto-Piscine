/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:37:09 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/03 18:43:04 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{	
	int	index;

	index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0')
	{
		index++;
	}
	if (s1[index] == s2[index])
	{
		return (0);
	}
	else
	{
		return (s1[index] - s2[index]);
	}
}

/*int	main()
{
	char	str[] = "teste";
	char	dest1[] = "teste";
	char	dest2[] = "test5sa2as1a";
	char	dest3[] = "testuasa1as1";
	
	printf("%d\n", ft_strcmp(str, dest1));
	printf("%d\n", ft_strcmp(str, dest2));
	printf("%d\n", ft_strcmp(str, dest3));
}*/	
