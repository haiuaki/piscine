/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:54:05 by juljin            #+#    #+#             */
/*   Updated: 2025/09/20 15:24:00 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_alphan(char k)
{
	if ((k >= 'a' && k <= 'z')
		|| (k >= 'A' && k <= 'Z')
		|| (k >= '0' && k <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	k;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		k = str[i];
		if (k >= 'A' && k <= 'Z' && (!(i == 0 || !ft_alphan(str[i - 1]))))
			str[i] += 32;
		if (k >= 'a' && k <= 'z' && (i == 0 || !ft_alphan(str[i - 1])))
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "hi, how are you? 42WoRds forty-two; fifty+and+one";
	char	b[] = "hElLo, hell0e 7a f4im ?";
	char	c[] = "<<<<,,,<<<<e hello w8,,,";

	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(b));
	printf("%s\n", ft_strcapitalize(c));
}

