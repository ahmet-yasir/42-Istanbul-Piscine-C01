/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 04:43:32 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/06 15:25:04 by akulaksi         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[i])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

/*int main (void)
{
    int arr[]= {4, 3, 7, -6, 5, 4, 3, 1, 0, 0};
    int i;
    
    i = 0;
    while (i < 9)
    {
        printf("%d ", arr[i]);
        i++;      
    }
    printf("\n");
    ft_sort_int_tab(arr, 9);
    i = 0;
    while (i < 9)
    {
        printf("%d ", arr[i]);
        i++;      
    }
}*/