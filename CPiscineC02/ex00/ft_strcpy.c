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

\char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char dest[] = "";

	printf("%lu\n", strlen(dest));	
	ft_strcpy(dest, "Super mega test!");
	printf("%s", dest);	
}
*/
