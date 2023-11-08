/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:40:16 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/07 04:57:57 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if (!dst && !src)
        return (NULL);
        while(i < n)
        {
            ((char *)dst)[i] = ((char *)src)[i];
            i++;
        }
        //((char *)dst)[i] = '\0';
    return (dst);
}

// int main()
// {
    
//     return (0);
// }