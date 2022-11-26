/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:21:24 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/08 20:25:24 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	index;

	index = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	while (index < nb)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
    printf("%d", ft_is_prime(11));
}*/
