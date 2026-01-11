/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:39:58 by juljin            #+#    #+#             */
/*   Updated: 2025/09/13 19:56:42 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a / *b;
	*b = *a % *b;
	*a = i;
}
/*
int	main(void)
{
	int	value1;
	int	value2;
	int	*c;
	int	*d;

	c = &value1;
	d = &value2;
	value1 = 15;
	value2 = 10;
	ft_ultimate_div_mod(c, d);
	printf("%d", value1);
	printf("%d", value2);
	return (0);
}
*/
