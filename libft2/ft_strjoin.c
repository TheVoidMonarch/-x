/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:29:28 by brybenja          #+#    #+#             */
/*   Updated: 2024/09/14 20:47:59 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len1;
	size_t	len2;

	if (!s1 ||!s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstr = malloc(sizeof(char) *(len1 + len2 +1));
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, s1, len1);
	ft_memcpy(newstr + len1, s2, len2);
	newstr[len1 + len2] = '\0';
	return (newstr);
}
