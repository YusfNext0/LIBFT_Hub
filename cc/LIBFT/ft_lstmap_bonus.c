/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:58:51 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/19 23:23:01 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*temp;

	node = temp;	
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
			ft_lstclear(node, del(node->content));
		
		del(lst->content);
		lst = lst->next;
	}
}
