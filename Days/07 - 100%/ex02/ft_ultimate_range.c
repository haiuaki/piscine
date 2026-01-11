/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 19:01:41 by juljin            #+#    #+#             */
/*   Updated: 2025/09/25 12:27:29 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	size;
	int	*arr;
	int	i;

	min = 3;
	max = 8;
	size = ft_ultimate_range(&arr, min, max);
	if (size == -1)
	{
		printf("malloc fail\n");
		return (1);
	}
	else if (size == 0)
	{
		printf("empty\n");
		return (1);
	}
	printf("Array of size : %d", size);
	printf("\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}
*/
