/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:11:58 by juljin            #+#    #+#             */
/*   Updated: 2025/09/27 20:37:50 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 0 || nb == 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
/*
int	main(void)
{
	int	n;
	int	n1;
	int	n2;
	
	n = 3;
	n1 = 7;
	n2 = 9;
	printf("%d\n", ft_find_next_prime(n));
	printf("%d\n", ft_find_next_prime(n1));
	printf("%d\n", ft_find_next_prime(n2));
	return (0);
}
*/
