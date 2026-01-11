/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:49:09 by juljin            #+#    #+#             */
/*   Updated: 2025/09/22 14:43:47 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 0 || nb == 1)
		return (0);
	i = 2;
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	n;
	int	n1;
	int	n2;

	n = 0;
	n1 = 1;
	n2 = 19;
	printf("%d\n", ft_is_prime(n));
	printf("%d\n", ft_is_prime(n1));
	printf("%d\n", ft_is_prime(n2));
	return (0);
}
*/
