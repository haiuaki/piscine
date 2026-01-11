/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:05:28 by juljin            #+#    #+#             */
/*   Updated: 2025/09/25 12:55:37 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);

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
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < 32 || base[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		atoi;
	char	*itoa;

	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	atoi = ft_atoi_base(nbr, base_from);
	itoa = ft_itoa_base(atoi, base_to);
	return (itoa);
}
/*
int	main(void)
{
	char	*res1, *res2, *res3, *res4, *res5, *res6;

	res1 = ft_convert_base("19", "0123456789", "01");
	if (res1)
	{
		printf("19 in binary: %s\n", res1);
		free(res1);
	}
	res2 = ft_convert_base("255", "0123456789", "0123456789ABCDEF");
	if (res2)
	{
		printf("255 in hex: %s\n", res2);
		free(res2);
	}
	res3 = ft_convert_base("FF", "0123456789ABCDEF", "0123456789");
	if (res3)
	{
		printf("FF in decimal: %s\n", res3);
		free(res3);
	}
	res4 = ft_convert_base("101010", "01", "0123456789");
	if (res4)
	{
		printf("101010 in decimal: %s\n", res4);
		free(res4);
	}
	res5 = ft_convert_base("-123", "0123456789", "01");
	if (res5)
	{
		printf("-123 in binary: %s\n", res5);
		free(res5);
	}
	res6 = ft_convert_base("42", "0", "01");
	if (!res6)
		printf("Invalid base detected\n");
	return(0);
}
*/
