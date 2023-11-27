/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:26:53 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/20 18:11:38 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int main()
// {
// 	char p[] = "youssef";
// 	ft_bzero(p, 1);
// 	printf("my function : %s \n", p);
// 	printf("origine : %s", bzero(p, 1));
// 	return (0);
// }