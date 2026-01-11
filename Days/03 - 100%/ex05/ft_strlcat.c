/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:39:53 by juljin            #+#    #+#             */
/*   Updated: 2025/09/18 15:19:11 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

unsigned int	min_retval(unsigned int dlen,
		unsigned int slen, unsigned int size)
{
	if (size < dlen)
		return (slen + size);
	else
		return (slen + dlen);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (dlen == size)
		return (size + slen);
	while (src[i] && (dlen + i + 1) < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (min_retval(dlen, slen, size));
}
/*
int	main(void)
{
	char	dest[30] = "Hello, ";
	char	src[] = "World";
	unsigned int	size = 30 ;

	printf("taille initiale de dest : %d\n", ft_strlen(dest));
	printf("taille de dest : %lu\n", sizeof(dest));
	printf("ft_strlcat : %d\n", ft_strlcat(dest, src, size));
	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	return (0);
}
*/
