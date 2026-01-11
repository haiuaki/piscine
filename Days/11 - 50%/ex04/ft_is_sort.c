/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 20:59:08 by juljin            #+#    #+#             */
/*   Updated: 2025/09/30 13:25:34 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	numcmp(int a, int b)
{
	return (a - b);
}
*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	if (length < 2)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			break ;
		i++;
	}
	if (i == length - 1)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	tab[] = {0, 1, 3, 4};
	int	tab2[] = {0, 5, 3, 9};
	int	tab3[] = {0, 0, 2, 3};
	int	tab4[] = {0, 0, 0, 0};
	int	length = 4;

	printf("%d\n", ft_is_sort(tab, length, &numcmp));
	printf("%d\n", ft_is_sort(tab2, length, &numcmp));
	printf("%d\n", ft_is_sort(tab3, length, &numcmp));
	printf("%d\n", ft_is_sort(tab4, length, &numcmp));
	return (0);
}
*/
