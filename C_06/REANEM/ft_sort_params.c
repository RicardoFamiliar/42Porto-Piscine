/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:19:17 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/09 00:25:10 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(char *a[], char *b[])
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] == s2[index])
			index++;
		else if (s1[index] < s2[index] || s1[index] > s2[index])
			return (s1[index] - s2[index]);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	jndex;
	int	v;

	v = 1;
	while (v < argc - 1)
	{
		jndex = 1;
		while (jndex < argc - 1)
		{
			if (ft_strcmp(argv[jndex], argv[jndex + 1]) > 0)
			{
				ft_swap(&argv[jndex], &argv[jndex + 1]);
			}
			jndex++;
		}
		v++;
	}
	jndex = 1;
	while (jndex < argc)
	{
		ft_putstr(argv[jndex]);
		write(1, "\n", 1);
		jndex++;
	}
	return (0);
}
