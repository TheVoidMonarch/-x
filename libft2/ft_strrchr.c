/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:03:35 by brybenja          #+#    #+#             */
/*   Updated: 2024/09/14 21:09:30 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i--;
	}
	if ((unsigned char)str[0] == (unsigned char)c)
		return ((char *)&str[0]);
	return (NULL);
}
