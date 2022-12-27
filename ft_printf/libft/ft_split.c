/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:49:42 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/13 12:24:24 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	wordc(const char *s, char delimiter)
{
	unsigned int	w;

	w = 0;
	while (*s)
	{
		if (*s == delimiter)
			s++;
		else
		{
			while (*s != delimiter && *s)
				s++;
			w++;
		}
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	x;
	unsigned int	y;

	if (!s)
		return (NULL);
	arr = (char **) ft_calloc(wordc(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	y = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			x = 0;
			while (*s != c && *s && ++x)
				s++;
			arr[++y -1] = (char *) ft_calloc(x + 1, sizeof(char));
			ft_strlcpy(arr[y -1], s - x, x + 1);
		}
	}
	return (arr);
}
// #include <stdio.h>
// int main()
// {
// 	char **arr = ft_split("evo.evo.evo", '.');
// 	int a = 0;
// 	while(arr[a] != 0)
// 	{
// 		printf("%s\t", arr[a]);
// 		a++;
// 	}
// }