/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:53:58 by juljin            #+#    #+#             */
/*   Updated: 2025/09/22 14:44:49 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	i = 1;
	fact = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}
	return (0);
}
/*
int	main(void)
{
	int	nb;

	nb = -5;
	printf("%d\n", ft_iterative_factorial(nb));
}
*/
