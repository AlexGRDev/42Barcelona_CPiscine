/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegarc4 <alegarc4@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:22:03 by alegarc4          #+#    #+#             */
/*   Updated: 2024/10/24 09:22:55 by alegarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n < 0)
		c = 'N';
	else
		c = 'P';
	write(1, &c, 1);
}

/*
int	main(void)
{
	ft_is_negative(5);
	write(1, "\n", 1);
	ft_is_negative(-3);
	write(1, "\n", 1);
	ft_is_negative(0);
	return (0);
}
*/
