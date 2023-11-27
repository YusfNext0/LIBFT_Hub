/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:03:28 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/27 18:56:03 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char    *ft_strnstr(const char *str, const char *bra, size_t len)
// {
//     size_t i;
//     size_t j;
//     size_t x;

//     x = 0;
//     i = 0;
//     if (*bra == '\0')
//             return ((char *)str);

//     while (*str && x < len)
//     {
//         j = 0;
//         while (bra[j] == str[i] && bra[j] != '\0')
//         {
//             j++;
//             i++;
//         }
//         if (bra[j] == '\0')
//             return ((char *)str);
//         str++;
//         x++;
//     }
//     return (0);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	b;

	i = 0;
	// if ((!haystack || !needle) && !len)
	// 		return (NULL);
	if (!haystack && needle && !len)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	while (haystack[i] && i < len)
	{
		b = 0;
		while (haystack[i + b] == needle[b] && i + b < len)
		{
			if (needle[b + 1] == '\0')
				return ((char *)haystack + i);
			b++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// char big[] = "haystack";
// char little[] = "st";
// char *s1 = strnstr(NULL, NULL, 0);
// printf("origine : %s \n", s1);
// // char *s2 = ft_strnstr(NULL, NULL, 0);
// // printf("my function  : %s", s2);
// return (0);
// }
