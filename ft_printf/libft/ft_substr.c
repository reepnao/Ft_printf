/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 08:33:47 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/08 14:11:27 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substring;

	if (s)
	{		
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[i + start] != '\0')
			i++;
		substring = (char *) malloc((sizeof(char) * i) + 1);
		if (!(substring))
			return (NULL);
		j = 0;
		while (j < i)
		{
			substring[j] = s[start + j];
			j++;
		}
		substring[j] = '\0';
		return (substring);
	}
	return (NULL);
}
// #include <stdio.h>
// int main()
// {
// 	char s[] = "yyyuub";
// 	printf("%s",ft_substr(s,20,0));
// }