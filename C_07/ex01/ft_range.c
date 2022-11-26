/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:10:38 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/09 21:59:54 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*tab;
	int	*d;

	if (min >= max)
		return (0);
	range = max - min;
	tab = malloc(range * sizeof(int));
	d = tab;
	if (!d)
		return (0);
	i = 0;
	while (i < range)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
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
	size = max - min;
	ft_range(min, max);
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
