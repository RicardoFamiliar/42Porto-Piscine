/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:41:37 by ricada-s          #+#    #+#             */
/*   Updated: 2022/10/01 20:42:47 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
    int a, b, div, mod, *ptr, *ptr2;
    a = 67;
    b = 2;
    ptr = &div;
    ptr2 = &mod; 
    ft_div_mod(a, b, ptr, ptr2);
    printf("%d\n", div);
    printf("%d\n", mod);
 
}*/
