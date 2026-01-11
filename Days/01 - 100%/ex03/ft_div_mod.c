/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:14:04 by juljin            #+#    #+#             */
/*   Updated: 2025/09/13 10:43:51 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	c;
	int	d;
	int	*dv;
	int	*md;
	int	div_stor;
	int	mod_stor;

	dv = &div_stor;
	md = &mod_stor;
	c = 10;
	d = 3;
	ft_div_mod(c, d, dv, md);
	printf("%d", div_stor);
	printf("%d", mod_stor);
	return (0);
}
*/
