/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:41:37 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/06 14:38:22 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
// #include <fcntl.h>
// int main()
// {
//     int fd = open ("deneme.txt", O_WRONLY);
//     ft_putendl_fd("DenemeninDenemesi", fd);
// }