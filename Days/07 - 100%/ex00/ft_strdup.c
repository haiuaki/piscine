/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:44:01 by juljin            #+#    #+#             */
/*   Updated: 2025/09/24 16:02:46 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*ptr;
	int		slen;

	slen = 0;
	while (src[slen])
		slen++;
	dup = (char *)malloc(sizeof(char) * (slen + 1));
	if (!dup)
		return (NULL);
	ptr = dup;
	while (*src)
		*ptr++ = *src++;
	*ptr = '\0';
	return (dup);
}
/*
int	main(void)
{
	char	str[] = "hello";
	char	*array;

	array = ft_strdup(str);
	if (!array)
		return (NULL);
	printf("%s\n", array);
	free(array);
	return (0);
}
*/
