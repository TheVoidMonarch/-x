/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 23:24:03 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/08/12 00:11:10 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*apply_func)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !apply_func)
		return ;
	i = 0;
	while (s[i])
	{
		apply_func(i, &s[i]);
		i++;
	}
}
