/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:37:39 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/13 08:37:40 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
// #include <stdio.h>
// int main()
// {
// 	t_list *node1, *node2, *node3, *node4;
// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));
// 	node4 = (t_list *)malloc(sizeof(t_list));

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = NULL;
// 	node4->content = "42 kocaeli";

// 	printf("%s", ft_lstlast(node1)->content);
// }