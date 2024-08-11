/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:18:29 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/08/12 01:36:10 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	const unsigned char	*ptr;
	unsigned char		chck;

	if (str == NULL)
		return (NULL);
	ptr = (const unsigned char *)str;
	chck = (unsigned char)c;
	while (*ptr != '\0')
	{
		if (*ptr == chck)
			return ((char *)ptr);
		ptr++;
	}
	if (chck == '\0')
		return ((char *)ptr);
	return (NULL);
}
