/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:51:21 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/01 20:54:33 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{	
	int	temp;
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[size];
		tab[size] = tab[i];
		tab[i] = temp;
		i++;
		size--;
	}
}
/*
int main(void)
{
	int	tab[] = {1,2,3,4,5,6,7};
	int 	size = 7;
	ft_rev_int_tab(tab, size);
	printf("%i, %i, %i, %i, %i, %i, %i ", tab[0], tab[1], 
	tab[2], tab[3], tab[4], tab[5], tab[6]);
	return (0);
}*/
