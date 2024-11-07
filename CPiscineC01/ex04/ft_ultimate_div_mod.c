/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegarc4 <alegarc4@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:12:19 by alegarc4          #+#    #+#             */
/*   Updated: 2024/11/04 11:15:26 by alegarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

/*
int main(void)
{
    int a;
    int b;

    a = 5;
    b = 2;

    ft_ultimate_div_mod(&a, &b);
    printf("a: %d, b: %d\n", a, b);
    return (0);
}
*/
