/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorreia <dcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:26:02 by dcorreia          #+#    #+#             */
/*   Updated: 2022/10/05 15:26:57 by dcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
	i = 1;
	result = 1;
		while (i <= nb)
		{
			result *= i;
			i++;
		}
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}
*/
