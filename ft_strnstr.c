/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:19:51 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/08/12 03:13:43 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include "libft.h"

const char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	x;
	size_t	y;

	if (str == NULL)
		return (NULL);
	if (*to_find == '\0')
		return (str);
	x = 0;
	while (str[x] && x < n)
	{
		y = 0;
		while (str[x + y] == to_find[y] && to_find[y] && (x + y) < n)
			y++;
		if (to_find[y] == '\0')
			return (&str[x]);
		x++;
	}
	return (NULL);
}
