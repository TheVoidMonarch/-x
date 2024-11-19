/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:28:58 by brybenja          #+#    #+#             */
/*   Updated: 2024/09/14 20:47:13 by brybenja         ###   ########.fr       */
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
