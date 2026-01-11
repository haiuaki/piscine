/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:30:00 by juljin            #+#    #+#             */
/*   Updated: 2025/09/25 12:51:36 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	how_many(char **strs, char *sep, int size)
{
	int	i;
	int	strslen;
	int	seplen;

	seplen = (size - 1) * ft_strlen(sep);
	i = 0;
	strslen = 0;
	while (i < size)
	{
		strslen += ft_strlen(strs[i]);
		i++;
	}
	return (strslen + seplen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	int		i;

	if (size == 0)
	{
		concat = malloc(sizeof(char));
		if (!concat)
			return (NULL);
		concat[0] = '\0';
		return (concat);
	}
	concat = malloc(sizeof(char) * (how_many(strs, sep, size) + 1));
	if (!concat)
		return (NULL);
	concat[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(concat, strs[i]);
		if (i < size - 1)
			ft_strcat(concat, sep);
		i++;
	}
	return (concat);
}
// get a variable to count how many strings in strs -> N.
// then there will be N - 1 sep strings seperating all the strings.
// so total would be 2N + 1 length for the malloc.
// do a loop with strcat to concatenate the strs[i] with the sep and increment i
// N times the pair
// when N - 1 is reached, only copy the strs.
// then end with '\0'
/*
int	main(void)
{
	char	*str[] = {"hello", "how", "are", "you", "today"};
	char	sep[] = "yihuan";
	int	size;

	size = 5;
	printf("Size to malloc : %d\n", how_many(str, sep, size));
	printf("Length of sep : %d\n", ft_strlen(sep));
	printf("Concatenated strings : %s\n", ft_strjoin(size, str, sep));
	return (0);
}
*/
