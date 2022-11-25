/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 02:49:52 by ricada-s          #+#    #+#             */
/*   Updated: 2022/09/26 21:38:04 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	test;

	if (n >= 0)
	{
		test = 'P';
	}
	else
	{
		test = 'N';
	}
	write(1, &test, 1);
}

/*int main(void)
{
	ft_is_negative(1);
	return (0);
}*/
