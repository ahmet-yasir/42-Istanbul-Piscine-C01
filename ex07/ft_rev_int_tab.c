/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 04:20:10 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/06 15:24:03 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab [size - 1 - i];
		tab [size - 1 - i] = temp;
		i++;
	}
}

/*int main (void)
{
    int arr[]= {1, 2, 3, 4, 5};
    int i;
    
    i = 0;
    while (arr[i])
    {
        printf("%d ", arr[i]);
        i++;      
    }
    printf("\n");
    ft_rev_int_tab(arr, 5);
    i = 0;
    while (arr[i])
    {
        printf("%d ", arr[i]);
        i++;      
    }
}*/