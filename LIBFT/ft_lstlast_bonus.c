/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:33:08 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/18 22:56:07 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;
	
	node = lst;
	if (lst)
	{
		while (node->next)
		{
			node = node->next;
		}
	}
	return (node);
}
// #include <stdio.h>
// int main()
// {
// 	t_list *first = ft_lstnew(ft_strdup("first"));
// 	t_list *sec = ft_lstnew(ft_strdup("sec"));

// 	t_list **lst;

// 	lst = &first;

// 	ft_lstadd_front(lst, sec);
// 	printf("%s\n", (*lst)->next->content);
// }