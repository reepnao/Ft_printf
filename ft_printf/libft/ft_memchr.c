/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:39:58 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/08 13:43:30 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n--)
		if (*p++ == (unsigned char)c)
			return ((void *)--p);
	return (NULL);
}
