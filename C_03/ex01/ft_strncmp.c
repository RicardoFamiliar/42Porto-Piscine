/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:41:32 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/05 18:11:02 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] != '\0' && s2[index] != '\0'
		&& index < n -1 && s1[index] == s2[index])
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
/*
#include <stdio.h>
int main(void)
{
    char    src[] = "teste";
    char    dest[] = "teste";
    char    dest2[] = "testi";
    
    printf("%d\n", ft_strncmp(src, dest, 5));
    printf("%d\n", ft_strncmp(src, dest2, 10));
}*/
