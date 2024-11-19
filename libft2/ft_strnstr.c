/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:02:57 by brybenja          #+#    #+#             */
/*   Updated: 2024/09/14 20:54:36 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  The strnstr() function locates the first occurrence of the null-termi-
    nated string needle in the string haystack, where not more than len char-
    acters are searched.  Characters that appear after a `\0' character are
    not searched.  Since the strnstr() function is a FreeBSD specific API, it
    should only be used when portability is not a concern.

	RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs
     nowhere in haystack, NULL is returned; otherwise a pointer to the first
     character of the first occurrence of needle is returned.
*/

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (len == 0 && !str)
		return (NULL);
	if (*find == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && find[j] && i + j < len && str[i + j] == find[j])
			j++;
		if (!find[j])
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
