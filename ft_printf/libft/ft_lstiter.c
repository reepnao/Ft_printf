/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:37:28 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/13 08:37:30 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
// #include <stdio.h>
// void f(void *content)
// {
// 	((char *)content)[0] += 32;
// }
// int main()
// {
// 	t_list *node1, *node2;
// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));

// 	node1->content = ft_strdup("KOC");
// 	node2->content = ft_strdup("FENRIR");

// 	ft_lstiter(node1, f);
// 	ft_lstiter(node2, f);

// 	printf("%s\n", (char *)node1->content);
// 	printf("%s", (char *)node2->content);
// }