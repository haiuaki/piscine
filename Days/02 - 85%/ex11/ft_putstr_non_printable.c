/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:09:57 by juljin            #+#    #+#             */
/*   Updated: 2025/09/18 15:48:41 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char	i;
	char			*hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		i = (unsigned char)*str;
		if (i < 32 || i >= 127)
		{
			write(1, "\\", 1);
			write(1, &hex[i / 16], 1);
			write(1, &hex[i % 16], 1);
		}
		else
			write(1, &i, 1);
		str++;
	}
}
/*
int	main(void)
{
	char str1[] = "abcdef\nhijkl";

	ft_putstr_non_printable(str1);
	return (0);
}
*/
