/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:38:15 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/13 08:38:16 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
// #include <stdio.h>
// int main()
// {
// t_list *node1, *node2, *node3, *node4;
// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));
// 	node4 = (t_list *)malloc(sizeof(t_list));
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	printf("%d", ft_lstsize(node1));
// }