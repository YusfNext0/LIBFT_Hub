/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:48:42 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/16 23:46:20 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int c_num( int n)
{
    int    i;
    int count;
    
    i = 0;
    count = 1;
    // if (n < 0)
    // { 
    //     n = -n;
    //     i++;
    // }
    // while (n)
    // {
    //     n = n / 10;
    //     i++;
    // }
    // return (i);
    while (n / 10)
    {
        count++;
        n /= 10;
    }
    return (count);
}

// static void    convert( int n, char *p)
// {
//     int    i;
//     int    s;
//     int    c;

//     c = c_num(n) - 1;
// //     if (n == 0)
// //     {   p[0] = 0 + 48;
// //         return (p);
// //     }
//     if (n < 0)
//     {
//         i = 1;
//         p[0]= '-';
//         n = -n;
//     }else
//         i = 0;
//     while (c >= i)
//     {
//         s = n;
//         n = (n / 10);
//         s = (s % 10);
//         p[c] = s + 48; 
//         c--;
//     }
// }

char    *ft_itoa(int n)
{
    char    *p;
    int     count;
    unsigned int nb;

    count = c_num(n);
    if (n < 0)
    {
        nb = -n;
        count++;
    }
    else
        nb = n;
    p = malloc(count + 1);
    if (!p)
        return (NULL);
    p[count--] = '\0'; 
    while (count >= 0)
    {
        p[count--] = (nb % 10) + 48;
        nb = (nb / 10);
    }
    if (n < 0)
        p[0] = '-';
    return (p);
}

// int main()
// {
//     printf("%s\n", ft_itoa(-53435));
//     return (0);
// }