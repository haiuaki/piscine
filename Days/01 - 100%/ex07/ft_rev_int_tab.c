/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:40:29 by juljin            #+#    #+#             */
/*   Updated: 2025/09/15 19:22:02 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	arr[] = {2, 3, 4, 5, 6, 7};
	// int	*arr; #### OTHER SOLUTION TO AVOID SAME LINE DECLARATION AND ASSIGNATION
	// arr[0] = 1;
	// arr[1] = 2;
	// arr[2] = 3;
	// arr[3] = 4;
	// arr[4] = 5;
	int	e;
	int	s;

	s = sizeof(arr) / sizeof(int);
	ft_rev_int_tab(arr, s);
	e = 0;
	while (e < s)
	{
		printf("%d", arr[e]);
		e++;
	}
}
*/
