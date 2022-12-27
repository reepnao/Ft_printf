/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:37:08 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/13 08:37:09 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		ft_lstdelone((*lst), del);
		*(lst) = temp;
	}
}
// #include <stdio.h>
// void *del(void *content)
// {
// 	free(content);
// 	return 0;
// }
// int main()
// {
// 	t_list *node1, *node2;
// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node1->content = ft_strdup("42");
// 	node2->content = ft_strdup("vadi");
// 	ft_lstadd_back(&node1, node2);
// 	ft_lstclear(&node1, (void *)(*del));
// 	if (node1)
// 		printf("1\n");
// 	else
// 		printf("0\n");
// 	if (node2)
// 		printf("1\n");
// 	else
// 		printf("0\n");
// }