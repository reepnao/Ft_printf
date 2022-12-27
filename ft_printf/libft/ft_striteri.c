/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:06:36 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/18 02:06:44 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
// void f(unsigned int a, char *c)
// {
// 	*c = ft_toupper(*c);
// }
// #include <stdio.h>
// int main()
// {
// 	char str[] = "merhaba";
// 	ft_striteri(str, f);
// 	printf("%s", str);
// }