/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:59:02 by juljin            #+#    #+#             */
/*   Updated: 2025/09/24 16:02:22 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ints;
	int	i;

	ints = 0;
	if (min >= max)
		return (0);
	ints = malloc(sizeof(int) * (max - min));
	if (!ints)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		ints[i] = min + i;
		i++;
	}
	return (ints);
}
/*
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*ints;

	ints = 0;
	min = 9;
	max = 19;
	ints = ft_range(min, max);
	if (!ints)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", ints[i]);
		i++;
	}
	free(ints);
	return (0);
}
*/
