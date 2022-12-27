/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:42:27 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/06 14:39:46 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	c;
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen((char *)src);
	c = 0;
	if (n <= d)
	{
		return (n + s);
	}
	while (src[c] != '\0' && d + c + 1 < n)
	{
		dst[d + c] = src[c];
		c++;
	}
	dst[d + c] = '\0';
	return (d + s);
}
