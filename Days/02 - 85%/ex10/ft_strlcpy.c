/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:17:12 by juljin            #+#    #+#             */
/*   Updated: 2025/09/18 20:29:09 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	while (src[i] != '\0' && (i + 1) < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (slen);
}
/*
int	main(void)
{
	char	dest[30] = "Hello";
	char	src[15] = "World";
	unsigned int	size;

	size = ft_strlen(dest);
	printf("ft_strlcpy : %u\n", ft_strlcpy(dest, src, size));
	printf("ft_strlen(src) : %d\n", ft_strlen(src));
	printf("ft_strlen(dest) :%d\n", ft_strlen(dest));
	return (0);
}
*/
