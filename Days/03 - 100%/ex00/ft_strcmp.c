/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:20:13 by juljin            #+#    #+#             */
/*   Updated: 2025/09/18 11:06:30 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int	main(void)
{
	char	str1[] = "dib";
	char	str2[] = "bib";

	printf("%d\n", ft_strcmp(str1, str2));
}
*/
// POSITIVE VALUE = ASCII value is higher than str2
// NEGATIVE VALUE = ASCII value is lower than str2
