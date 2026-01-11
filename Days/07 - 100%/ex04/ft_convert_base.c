/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:44:37 by juljin            #+#    #+#             */
/*   Updated: 2025/09/25 12:54:55 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

// assign char to a value in the base, useful for atoi_base
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

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	b_len;

	sign = 1;
	result = 0;
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
		if ((sign == 1 && result > 2147483647)
			|| (sign == -1 && - result < -2147483648))
			return (0);
		str++;
	}
	return (result * sign);
}

// count the number in the base_from to know how much to allocate.
int	count_digits(int nbr, int baselen)
{
	int	size;

	size = 0;
	if (nbr <= 0)
		size = 1;
	while (nbr != 0)
	{
		nbr = nbr / baselen;
		size++;
	}
	return (size);
}

// from digits to the new base, return a string.
char	*ft_itoa_base(int nbr, char *base)
{
	int		size;
	int		b_len;
	long	nb;
	char	*result;

	b_len = ft_strlen(base);
	size = count_digits(nbr, b_len);
	nb = nbr;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	result[size] = '\0';
	if (nb == 0)
		result[0] = base[0];
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		result[(size--) - 1] = base[nb % b_len];
		nb = nb / b_len;
	}
	return (result);
}
