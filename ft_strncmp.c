/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 05:48:09 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/08/12 01:46:31 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	if (!s1 || !s2)
		return (-1);
	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
	{
		if (s1[i - 1] == s2[i - 1])
			return (0);
		else if (!s1[i])
			return (((unsigned char)s2[i]));
		else
			return (-(((unsigned char)s1[i])));
	}
	else
		return (((unsigned char)s1[i] - ((unsigned char)s2[i])));
}
