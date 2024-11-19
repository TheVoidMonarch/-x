/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:59:46 by brybenja          #+#    #+#             */
/*   Updated: 2024/09/14 20:51:47 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	copylen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (srclen < dstsize - 1)
	{
		copylen = srclen;
	}
	else
	{
		copylen = dstsize - 1;
	}
	ft_memcpy(dst, src, copylen);
	dst[copylen] = '\0';
	return (srclen);
}
