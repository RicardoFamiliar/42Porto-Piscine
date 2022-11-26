/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:32:45 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/08 23:07:26 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		result = result * nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (result);
}

/*#include <stdio.h>
int	main()
{
    printf("%i", ft_recursive_factorial(6));
}*/
