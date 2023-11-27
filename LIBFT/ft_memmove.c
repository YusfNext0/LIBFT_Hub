/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:26:47 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/17 12:16:14 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (0);
	if ((char *)dst > (char *)src)
		while (len-- > 0)
			((char *)dst)[len] = ((char *)src)[len];
	else
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

// int	main()
// {
// 	char s[] = "youssef nachat";
// 	printf("originale :%s\n", memmove(s, s + 8, 4 * sizeof(char)));
// 	printf("my function :%s\n", ft_memmove(s, s + 8, 4 * sizeof(char)));

// 	return (0);
//  }