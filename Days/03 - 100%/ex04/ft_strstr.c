/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:04:27 by juljin            #+#    #+#             */
/*   Updated: 2025/09/18 21:45:57 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
// return &str[i] if it's KO
int	main(void)
{
	char	str1[] = "Hello World, how are you today ? Good I hope";
	char	find1[] = "ell";
	char	find2[] = "od";
	char	find3[] = "bad";
	char	find4[] = "";

	printf("%s\n", ft_strstr(str1, find1));
	printf("%s\n", ft_strstr(str1, find2));
	printf("%s\n", ft_strstr(str1, find3));
	printf("%s\n", ft_strstr(str1, find4));
	return (0);
}
*/
