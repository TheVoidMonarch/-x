/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:15:54 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/08/12 03:29:29 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
/*#include <stdio.h>*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		chck;

	if (!str)
		return (NULL);
	ptr = (const unsigned char *)str;
	chck = (unsigned char)c;
	while (n-- > 0)
	{
		if (*ptr == chck)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
/*
int main() {
    char data[] = "Hello, world!";
    char target = 'w';
    char *result = ft_memchr(data, sizeof(data), target);

    if (result) {
        printf("Character '%c' found at position: %ld\n", target, result - data);
    } else {
        printf("Character '%c' not found.\n", target);
    }

    return 0;
}
*/
