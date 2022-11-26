/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:44:12 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/09 00:00:56 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;
	int	param;

	param = argc - 1;
	while (param >= 1)
	{
		index = 0;
		while (argv[param][index] != '\0')
		{
			write(1, &argv[param][index], 1);
			index++;
		}
		write(1, "\n", 1);
		param--;
	}
}
