/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 10:43:25 by juljin            #+#    #+#             */
/*   Updated: 2025/09/27 10:52:13 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

struct s_stock_str	*ft_strs_to_tab(int ac, char**);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return (0);
}
