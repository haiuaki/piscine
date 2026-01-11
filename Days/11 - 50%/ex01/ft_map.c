/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:56:20 by juljin            #+#    #+#             */
/*   Updated: 2025/09/30 13:26:58 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>

int	is_neg(int nb)
{
	if (nb < 0)
		return (0);
	else
		return (1);
}
*/
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *)malloc(sizeof(int) * length);
	if (!arr)
	{
		arr = NULL;
		return (arr);
	}
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	tab[] = {1, -3, -5, 2, 3, 6};
	int	length;
	int	i;
	int	*result;

	length = 6;
	i = 0;
	result = ft_map(tab, length, &is_neg);
	while (i < length)
	{
		printf("---\n");
		printf("%d\n", tab[i]);
		printf("%d\n", result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
