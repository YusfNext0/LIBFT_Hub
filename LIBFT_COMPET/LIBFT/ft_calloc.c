/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 05:43:44 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/07 07:06:52 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    // void    *ptr;
    // if (size > 0)
    // {
    //     if (count != 0)
    //         *ptr = calloc(count,sizeof(void ))
    //         return (ptr);
    //     else 
    //         return (0);
    // }else
    //      return (0);

    size_t  total_size;
    void    *ptr;
    
    total_size = count * size;
    ptr = malloc(total_size);
    if (ptr)
        ft_memset(ptr,0,total_size);   
    
    return (ptr);


}
