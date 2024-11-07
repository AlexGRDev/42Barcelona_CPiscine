/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegarc4 <alegarc4@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:10:32 by alegarc4          #+#    #+#             */
/*   Updated: 2024/11/04 11:11:30 by alegarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 5;
    b = 2;
    
    ft_div_mod(a, b, &div, &mod);

    printf("a : %d, b: %d, mod: %d, div: %d\n", a, b, div, mod);
    return (0);
}
*/
