/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:04:55 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/12 21:25:13 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strlen_total(char **str, char *sep, int size)
{
	int	i;
	int	len_total;
	int	len_sep;

	i = 0;
	len_total = 0;
	len_sep = ft_strlen(sep);
	while (i < size)
	{
		len_total += ft_strlen(str[i]);
		len_total += len_sep;
		i++;
	}
	len_total -= len_sep;
	return (len_total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s1;
	int		i;
	int		j;
	int		c;

	s1 = malloc(sizeof(char) * (ft_strlen_total(strs, sep, size) + 1));
	i = 0;
	c = 0;
	if (size == 0)
		return (malloc(sizeof(strs)));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s1[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != (size - 1))
			s1[c++] = sep[j++];
		i++;
	}
	s1[c] = '\0';
	return (s1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 3;
	strs = malloc(3 * sizeof(char *));
	strs[0] = malloc(sizeof(char) * (5 + 1));
	strs[1] = malloc(sizeof(char) * (7 + 1));
	strs[2] = malloc(sizeof(char) * (16 + 1));
	strs[0] = "This";
	strs[1] = "is separated";
	strs[2] = "with a special character.";
	separator = "-";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}*/
