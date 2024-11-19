/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:05:02 by brybenja          #+#    #+#             */
/*   Updated: 2024/09/14 20:57:23 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_len;
	size_t	finish;
	char	*dest;

	if (!s)
		return (0);
	substr_len = ft_strlen(s);
	finish = 0;
	if (start < substr_len)
		finish = substr_len - start;
	if (finish > len)
		finish = len;
	dest = malloc(sizeof(char) * (finish + 1));
	if (!dest)
		return (0);
	ft_strlcpy (dest, s + start, finish + 1);
	return (dest);
}
