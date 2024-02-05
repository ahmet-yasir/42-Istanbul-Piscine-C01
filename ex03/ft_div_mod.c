/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 03:34:39 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/05 03:47:09 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }    
}

/*int main (void)
{
    int *mod;
    int *div;
    
    mod = (int *)malloc(sizeof(int));
    div = (int *)malloc(sizeof(int));
    ft_div_mod(4, 0, div, mod);
    printf("div:%d\nmod:%d", *div, *mod);
    return (0);
}*/