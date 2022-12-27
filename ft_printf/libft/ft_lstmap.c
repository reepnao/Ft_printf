/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:37:50 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/13 08:37:52 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;

	if (lst == NULL || f == NULL)
		return (NULL);
	start = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, new);
		lst = lst->next;
	}
	return (start);
}
// #include <stdio.h>
// void    del(void *content)
// {
//    	free(content);
// }
// void *f(void *content)
// {
// 	((char *)content)[0] -= 32;
// 	return(content);
// }
// int main()
// {
// 	t_list *node1,*node2;
// 	t_list *node3;
// 	node1 = ft_lstnew(ft_strdup("recep"));
// 	node2 = ft_lstnew(ft_strdup("kocaeli"));
// 	ft_lstadd_back(&node1, node2);
// 	node3 = ft_lstmap(node1, f, del);
// 	printf("%s\t", (char *)node3->content);
// 	printf("%s\t", (char *)node3->next->content);
// }