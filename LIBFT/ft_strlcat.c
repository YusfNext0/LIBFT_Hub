/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:36:46 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/06 23:50:27 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t s;
	size_t d;

	if ((!dst || !src) && !dstsize)
		return (0); 
	i = 0;
	j = ft_strlen(dst);
	d = ft_strlen(src);
	s = j;
	if(s < dstsize && dstsize != 0)
	{
		while (src[i] && i < (dstsize - s) - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
		return (s + d);
	}else 
		return (d + dstsize);
}

