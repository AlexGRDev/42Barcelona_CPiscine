/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegarc4 <alegarc4@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:16:36 by alegarc4          #+#    #+#             */
/*   Updated: 2024/10/24 09:20:08 by alegarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = i + '0';
		write(1, &c, 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
