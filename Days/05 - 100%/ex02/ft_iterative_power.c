/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:19:59 by juljin            #+#    #+#             */
/*   Updated: 2025/09/22 17:17:50 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	if (power > 0)
	{	
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
	else
	{
		while (power < 0)
		{
			result *= nb;
			power++;
		}
		return (1 / result);
	}
}
/*
int	main(void)
{
	int	n;
	int	pow;

	n = 12;
	pow = -2;
	printf("%d\n", ft_iterative_power(n, pow));
	return (0);
}
*/
