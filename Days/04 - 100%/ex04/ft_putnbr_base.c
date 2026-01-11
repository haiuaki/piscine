/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:53:45 by juljin            #+#    #+#             */
/*   Updated: 2025/09/22 11:25:01 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < 32 || base[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		b_size;
	long	nb;

	i = 0;
	b_size = 0;
	nb = nbr;
	if (check_base(base))
	{
		while (base[b_size])
			b_size++;
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb < b_size)
			ft_putchar(base[nb]);
		if (nb >= b_size)
		{
			ft_putnbr_base(nb / b_size, base);
			ft_putnbr_base(nb % b_size, base);
		}
	}
}
/*
int	main(void)
{
	char	base[] = "0123456789"; // /10 & %10
	char	base1[] = "01"; // /2 & %2
	char	base2[] = "0123456789ABCDEF"; // /16 & %16
	char	base3[] = "poneyvif"; // /8 & %8
	char	base4[] = "0";
	char	base5[] = "1254+6789";
	char	base6[] = "11";
	char	base7[] = "a";
	
	ft_putnbr_base(127, base);
	printf("\n");
	ft_putnbr_base(127, base1);
	printf("\n");
	ft_putnbr_base(127, base2);
	printf("\n");
	ft_putnbr_base(127, base3);
	printf("\n");
	ft_putnbr_base(19, base4);
	printf("\n");
	ft_putnbr_base(19, base5);
	printf("\n");
	ft_putnbr_base(19, base6);
	printf("\n");
	ft_putnbr_base(19, base7);
	printf("\n");
	return (0);
}
*/
