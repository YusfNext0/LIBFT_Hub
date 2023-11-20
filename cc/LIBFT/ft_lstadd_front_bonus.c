/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:45:10 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/19 15:55:48 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *temp;
	
	if (!*lst)
		*lst = new;
	else 
	{
		temp = *lst;
		new->next = temp;
		*lst = new;
	}
}
// int	main()
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("first"));
// 	t_list *node2 =  ft_lstnew(ft_strdup("sec"));
	
// 	ft_lstadd_front(&node1, node2);
// 	printf("%s\n", node1->content);
// 	printf("%s\n", node1->next->content);
// 	return (0);
// }