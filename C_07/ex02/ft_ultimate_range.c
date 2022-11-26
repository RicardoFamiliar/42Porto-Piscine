/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:32:07 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/10 23:24:59 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	buffer = malloc((max - min) * sizeof(int));
	tab = buffer;
	if (!tab)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < (max - min))
	{
		buffer[i] = min + i;
		i++;
	}
	return (max - min);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	size;
	int	i = 0;
	int	*tab;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
