/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegarc4 <alegarc4@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:08:51 by alegarc4          #+#    #+#             */
/*   Updated: 2024/11/04 11:10:02 by alegarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
int     main(void)
{
    int     a;
    int     b;
    int     *ptra;
    int     *ptrb;

    a = 1;
    b = 2;

    ptra = &a;
    ptrb = &b;

    ft_swap (ptra, ptrb);
    printf ("a : %d, b : %d\n", a,b);
    return (0);
}
*/
