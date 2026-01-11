/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juljin <juljin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:51:08 by juljin            #+#    #+#             */
/*   Updated: 2025/09/25 16:51:35 by juljin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

int	issep(char a, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (a == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *str, char *charset)
{
	char	*dup;
	int		slen;
	int		i;

	slen = 0;
	i = 0;
	while (str[slen] && !issep(str[slen], charset))
		slen++;
	dup = (char *)malloc(sizeof(char) * (slen + 1));
	if (!dup)
		return (NULL);
	while (i < slen)
	{
		dup[i] = str[i];
		i++;
	}
	dup[slen] = '\0';
	return (dup);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && issep(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !issep(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = word_count(str, charset);
	array = (char **)malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	while (str[i])
	{
		while (str[i] != '\0' && issep(str[i], charset))
			i++;
		if (str[i])
		{
			array[j] = ft_strdup(&str[i], charset);
			j++;
			while (str[i] && !issep(str[i], charset))
				i++;
		}
	}
	array[j] = NULL;
	return (array);
}
/*
int	main(void)
{
	char	charset[] = " ,.;"
	char	str[] = "Hello World How are you today";
	char	**array;
	int		i;

	i = 0;
	array = ft_split(str, charset);
	while (array[i] != NULL)
	{
		printf("%s\n", array[i]);
		i++;
	}
	free(array);
	return (0);
}
*/
