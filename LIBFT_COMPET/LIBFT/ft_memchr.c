/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:12:04 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/05 04:36:23 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
   size_t  i;
   
   i = 0;
 
   while (i < n)
   {
        if (((unsigned char *)s)[i] == (unsigned char )c)
            return (unsigned char *)(s + i);
        i++;
   }
   return (NULL);
   
}

// int main()
// {
//     char p[] = "/|\x12\xff\x09\0\x42\042\0\42|\\"; 
//     printf("my function : %s \n", ft_memchr(p,0, 0));
//      printf("origine : %s", memchr(p,0, 0));
//     return (0);
// }