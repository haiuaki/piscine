/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:02:57 by juljin            #+#    #+#             */
/*   Updated: 2025/09/20 23:05:43 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		result = 10 * result + (str[i++] - '0');
	return (result * sign);
}
/*
int	main(void)
{
	char	str1[] = "  ---+--+1234ab567";
	char	str2[] = " \n ---1909ew8";
	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	return (0);
}
*/
