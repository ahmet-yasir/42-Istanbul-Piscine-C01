/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 03:16:31 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/05 03:22:06 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    ft_ultimate_ft (int *********nbr)
{
    *********nbr = 42;
}

int main (void)
{            
    int *ptr1;
    ptr1 = (int *)malloc(sizeof(int));  
    int **ptr2 = &ptr1;    
    int ***ptr3 = &ptr2;   
    int ****ptr4 = &ptr3; 
    int *****ptr5 = &ptr4;  
    int ******ptr6 = &ptr5; 
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7; 
    int *********ptr9 = &ptr8; 

    ft_ultimate_ft(ptr9);

    printf("%d", *ptr1);

    return 0;
}
