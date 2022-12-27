/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:37:18 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/13 08:37:20 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
// #include <stdio.h>
// void *del(void *content)
// {
// 	free(content);
// 	return 0;
// }
// int main()
// {
// 	t_list *node1, *node2, *node3;
// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));

// 	node1->content = ft_strdup("merhaba");
// 	node2->content = ft_strdup("gebze");
// 	node3->content = ft_strdup("kocaeli");

// 	ft_lstdelone(node1, (void *)(*del));
// 	printf("%s", node1->content);
// 	printf("%s\t", node2->content);
// 	printf("%s\t", node3->content);
// }