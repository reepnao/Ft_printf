/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ultis.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:04:24 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/25 14:04:27 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int(int a)
{
	char	*res;
	int		chr;

	res = ft_itoa(a);
	chr = ft_strlen(res);
	ft_putstr_fd(res, 1);
	free(res);
	return (chr);
}

int	ft_hex(unsigned int a, char c)
{
	int	ret;

	ret = 0;
	if (a >= 16)
		ret += ft_hex(a / 16, c);
	if (c == 'X')
		write(1, &"0123456789ABCDEF"[a % 16], 1);
	if (c == 'x')
		write(1, &"0123456789abcdef"[a % 16], 1);
	return (ret + 1);
}

int	ft_ptr(unsigned long a, int sign)
{
	int	ret;

	ret = 0;
	if (sign == 1)
	{
		ret += write(1, "0x", 2);
		sign = 0;
	}
	if (a >= 16)
		ret += ft_ptr(a / 16, 0);
	write(1, &"0123456789abcdef"[a % 16], 1);
	return (ret + 1);
}

int	ft_str(char *str)
{
	int	i;

	i = -1;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[++i])
		write(1, &str[i], 1);
	return (i);
}

int	ft_unsgn(unsigned int a)
{
	int	dgt;

	dgt = 1;
	if (a >= 10)
		dgt += ft_unsgn(a / 10);
	write(1, &"0123456789"[a % 10], 1);
	return (dgt);
}
// int main()
// {
// 	ft_printf(" %d\n", ft_***(*));
// }