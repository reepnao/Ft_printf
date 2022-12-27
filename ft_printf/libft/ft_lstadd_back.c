/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:36:47 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/13 08:36:49 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}
// #include <stdio.h>
// int main()
// {
// 	t_list *node1, *node2;
// 	node1 = ft_lstnew("42");
// 	node2 = ft_lstnew(" kocaeli");
// 	ft_lstadd_back(&node1, node2);
// 	printf("%s", node1->content);	
// 	printf("%s", node1->next->content);
// }