/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:56:22 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/08 21:13:18 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;

	(void)argc;
	index = 0;
	while (argv[0][index] != '\0')
	{
		write(1, &argv[0][index], 1);
		index++;
	}
	write(1, "\n", 1);
}
