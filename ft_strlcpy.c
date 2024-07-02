/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:19:11 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/07/02 12:39:41 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int len;

    if (size == 0)
        return ft_strlen(src);

    len = 0;
    while (src[len] != '\0' && len < size - 1)
	{
        dest[len] = src[len];
        len++;
    }
    dest[len] = '\0';

    return ft_strlen(src);
}