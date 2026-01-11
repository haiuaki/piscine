/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:18:17 by juljin            #+#    #+#             */
/*   Updated: 2025/10/01 16:31:55 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

int	index_value(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (a == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		b_len;
	long	result;

	sign = 1;
	result = 0;
	if (check_base(base))
	{
		while (*str == ' ' || (*str >= 9 && *str <= 13))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}
		b_len = ft_strlen(base);
		while (index_value(*str, base) != -1)
		{
			result = result * b_len + index_value(*str, base);
			str++;
		}
	}
	return ((int)result * sign);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("1010", "01"));// → 10 (binary)
	printf("%d\n", ft_atoi_base("123", "0123456789ABCDEF"));
	// → 127 (hex uppercase)
	printf("%d\n", ft_atoi_base("    -123", "0123456789"));// → -123 (decimal)
	printf("%d\n", ft_atoi_base("aa", "abc"));// → 0 + 0 = 0
	printf("%d\n", ft_atoi_base("cab", "abc"));// → 23^2 + 03 + 1 = 19
}

