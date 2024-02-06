/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 03:25:30 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/06 15:19:04 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main (void)
{
    int *num1;
    int *num2;
    
    num1 = (int *)malloc(sizeof(int));
    num2 = (int *)malloc(sizeof(int));
    *num1 = 42;
    *num2 = 24;
    ft_swap(num1, num2);
    printf("num1:%d\nnum2:%d",*num1, *num2);
    return (0);
}*/