/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:19:18 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/07/02 12:36:14 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    if (str == NULL)
    {
        return (0);
    }
    size_t len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}

