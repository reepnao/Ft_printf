/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:41:55 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/08 13:52:39 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	ss;

	ss = ft_strlen(s);
	while (ss >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		ss--;
	}
	return (NULL);
}
