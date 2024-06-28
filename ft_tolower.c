/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:15:14 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 15:15:15 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include "libft.h"

char *ft_tolower(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	if (*str == '\0')
	{
		return (NULL);
	}
	char *temp;

	temp = str;

	while (*temp != '\0')
	{
		if (*temp >= 'A' && *temp <= 'Z')
			{
				*temp = *temp + ('a' - 'A');
			
			temp++;
		
		}
	}
	return (str);
}
