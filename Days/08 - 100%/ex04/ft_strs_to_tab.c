/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 21:44:34 by juljin            #+#    #+#             */
/*   Updated: 2025/09/27 16:08:36 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*ft_strdup(char *str)
{
	char	*arr;
	int		i;
	int		slen;

	i = 0;
	slen = ft_strlen(str);
	arr = malloc(sizeof(char) * (slen + 1));
	if (!arr)
		return (NULL);
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*str;
	int					i;

	i = 0;
	str = malloc((sizeof(struct s_stock_str) * (ac + 1)));
	if (!str)
		return (NULL);
	(*(str + ac)).str = 0;
	i = 0;
	while (i < ac)
	{
		(*(str + i)).size = ft_strlen(av[i]);
		(*(str + i)).str = av[i];
		(*(str + i)).copy = ft_strdup(av[i]);
		i++;
	}
	return (str);
}
