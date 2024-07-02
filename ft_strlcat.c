/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 05:45:18 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/30 05:47:52 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int fstrlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int	v;
    unsigned int	c;
    unsigned int	x;

    if (dest == 0 || src == 0)
        return 0;
    x = 0;
    v = fstrlen(dest);
    c = fstrlen(src);
    if (size <= v)
        return (size + c);
    if (size == 0)
        return c;
    while (src[x]!= '\0' && v < size - 1)
    {
        dest[v] = src[x];
        v++;
        x++;
    }
    dest[v] = '\0';
    return (v + c - fstrlen(dest));
}

unsigned int fstrlen(char *str)
{
    unsigned int len = 0;
    while (*str!= '\0')
    {
        len++;
        str++;
    }
    return len;
}