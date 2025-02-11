/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:30:10 by brybenja          #+#    #+#             */
/*   Updated: 2024/09/14 20:50:12 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	len;
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	if ((!dst && size == 0) || (!src && size == 0))
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	len = dst_len + src_len;
	if (size <= dst_len)
		return (size + src_len);
	len = size - dst_len - 1;
	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
