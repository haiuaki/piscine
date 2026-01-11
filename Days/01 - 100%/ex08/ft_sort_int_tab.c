/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 18:02:43 by juljin            #+#    #+#             */
/*   Updated: 2025/09/14 20:29:32 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	while (i < size)
	{
		temp = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > temp)
		{
			tab[j + 1] = tab[j];
			j = j - 1;
		}
		tab[j + 1] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	arr[] = {3, 1, 9, 0, 4};
	int	s;
	int	e;

	s = sizeof(arr) / sizeof(int);
	ft_sort_int_tab(arr, s);
	e = 0;
	while (e < s)
	{
		printf("%d", arr[e]);
		e++;
	}
	return (0);
}
*/
