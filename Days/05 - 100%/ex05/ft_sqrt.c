/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:44:38 by juljin            #+#    #+#             */
/*   Updated: 2025/09/22 17:34:11 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	n;
	int	n1;
	int	result;
	int	result1;

	n = 1;
	n1 = 30;
	result = ft_sqrt(n);
	result1 = ft_sqrt(n1);
	printf("Square root of %d", n);
	printf(" is : %d\n", result);
	printf("Square root of %d", n1);
	printf(" is : %d\n", result1);
	return (0);
}
*/
