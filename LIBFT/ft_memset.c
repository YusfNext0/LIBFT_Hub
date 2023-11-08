/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:30:53 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/05 02:36:34 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    
    i = 0;
    while (i < len)
    {
     ///  *((char *)(b + i)) = c;
      ((char *)b)[i] = (char )c;
       i++; 
    }
    return (b);
}

// int main()
// {
//     char x[7] = "youssef";
//     printf("my memset : %s \n",ft_memset(x,0,3));
//     printf("the originale memset : %s",memset(x,'\0',3));

//     return (0);
// }