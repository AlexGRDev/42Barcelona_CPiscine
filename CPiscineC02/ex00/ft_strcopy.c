/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegarc4 <alegarc4@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:54:09 by alegarc4          #+#    #+#             */
/*   Updated: 2024/11/06 11:05:33 by alegarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *scr)
{
	int	i;

	i = 0;
	while (scr[i] != '\0')
	{
		dest[i] = scr[1];
		i++;
	}
	dest[0] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	strc[];
	char	dest[20];

	strc[] = "Hola Mundo";
	ft_strcpy(dest, strc);
	printf("str1: %s\n", strc);
	return (0);
}
*/
