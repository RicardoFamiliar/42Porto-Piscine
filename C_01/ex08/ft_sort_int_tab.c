/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:03:11 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/01 23:44:00 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{	
	int	swap;
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
		{
			i++;
		}
	}	
}

/*int	main()
{
	int	tab[] = {4,3,1,3,1,56,2,5,6};
	int	size;
	size = 8;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d",
tab[0], tab[1], tab[2], tab[3], tab[4], 
tab[5], tab[6], tab[7], tab[8]);
	


}*/	
