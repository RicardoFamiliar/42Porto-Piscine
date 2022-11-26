/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:16:39 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/13 16:10:43 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	index;
	int	param;

	param = 0;
	while (param < argc)
	{
		index = 0;
		while (argv[param][index] != '\0')
		{
			write(1, &argv[param][index], 1);
			index++;
		}
		write(1, "\n", 1);
		param++;
	}
}
