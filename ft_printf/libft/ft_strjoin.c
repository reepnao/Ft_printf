/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 08:34:19 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/12 18:11:10 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	size_t	b;
	char	*ptr;

	a = 0;
	b = 0;
	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (a < ft_strlen(s1))
	{
		ptr[a] = s1[a];
		a++;
	}
	while (a < a + ft_strlen(s2) && s2[b] != '\0')
	{
		ptr[a] = s2[b];
		b++;
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%s\n",(char *)ft_strjoin("Decorpsion","013"));
// }