/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:55:07 by brybenja          #+#    #+#             */
/*   Updated: 2024/09/14 20:31:46 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*strdest;
	char	*strsrc;

	strsrc = (char *)src;
	strdest = (char *)dest;
	if (strsrc == (NULL) && strdest == (NULL))
		return (dest);
	if (strdest > strsrc)
	{
		strdest += len;
		strsrc += len;
		while (len-- > 0)
			*--strdest = *--strsrc;
	}
	else
	{
		while (len-- > 0)
			*strdest++ = *strsrc++;
	}
	return (dest);
}
