/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:51:11 by juljin            #+#    #+#             */
/*   Updated: 2025/09/29 21:59:57 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define N 10

void	print_grid(int grid[N])
{
	int		i;
	char	sol[N + 1];

	i = 0;
	while (i < N)
	{
		sol[i] = grid[i] + '0';
		i++;
	}
	sol[N] = '\n';
	write(1, sol, N + 1);
}

int	check(int grid[N], int row, int col)
{
	int	icol;
	int	irow;

	irow = 0;
	while (irow < row)
	{
		icol = grid[irow];
		if (icol == col)
			return (0);
		if (icol - col == row - irow
			|| col - icol == row - irow)
			return (0);
		irow++;
	}
	return (1);
}

// nsol is a pointer because otherwise it would be a temporary count that is 
// overwritten with each recursion.
// stores the value inside what it points to so we can get it later with &nsol.

void	solver(int grid[N], int row, int *nsol)
{
	int	col;

	if (row == N)
	{
		print_grid(grid);
		(*nsol)++;
		return ;
	}
	col = 0;
	while (col < N)
	{
		if (check(grid, row, col))
		{
			grid[row] = col;
			solver(grid, row + 1, nsol);
		}
		col++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	grid[N];
	int	nsol;

	nsol = 0;
	solver(grid, 0, &nsol);
	return (nsol);
}
/*
int	main(void)
{
	int		i;
	int		nb;
	char	sol[1000];

	nb = ft_ten_queens_puzzle();
	if (nb == 0)
		write(1, "0\n", 2);
	else
		{
			i = 0;
			while (nb > 0)
			{
				sol[i] = (nb % 10) + '0';
				nb = nb / 10;
				i++;
			}
			while (i > - 1)
			{
				write(1, &sol[i], 1);
				i--;
			}
			write(1, "\n", 1);
		}
	return (0);
}
*/
