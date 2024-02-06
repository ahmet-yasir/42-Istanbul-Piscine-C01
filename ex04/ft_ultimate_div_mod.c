/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 03:48:37 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/06 15:21:01 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

/*int main (void)
{
    int *num1;
    int *num2;

    num1 = (int *)malloc(sizeof(int));
    num2 = (int *)malloc(sizeof(int));
    *num1 = 5;
    *num2 = 3;
    printf("num1:%d\nnum2:%d\n", *num1, *num2);
    ft_ultimate_div_mod(num1,num2);
    printf("num1:%d\nnum2:%d\n", *num1, *num2);   
    return (0);
}*/