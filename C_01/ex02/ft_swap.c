/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:39:57 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/01 20:41:02 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{	
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int main(void)
{
    int a = 10;
    int b = 13;
    
    printf("aahsahshas : %d\n", a);
    printf("a2 : %d\n", b);
    
    ft_swap(&a, &b);
    
    printf("a1 : %d\n", a);
    printf("a2 : %d\n", b);
}*/
